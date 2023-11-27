#include "main.h"
#define MAXSIZE 1204
#define SE STDERR_FILENO
/**
* main - program that copies the content of a file to another file.
* @arg: argument count
* @argv: argument vector
* Return: 0
*/
int main(int arg, char *argv[])
{
int input_file, output_file, input_stat, output_stat;
char buff[MAXSIZE];
mode_t mode;
mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
if (arg != 3)
dprintf(SE, "Usage: cp file_from file_to\n"), exit(97);
input_file = open(argv[1], O_RDONLY);
if (input_file == -1)
dprintf(SE, "Error: Can't read from file %s\n", argv[1]), exit(98);
output_file = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, mode);
if (output_file == -1)
dprintf(SE, "Error: Can't write to %s\n", argv[2]), exit(99);
do {
input_stat = read(input_file, buff, MAXSIZE);
if (input_file == -1)
{
dprintf(SE, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
if (input_stat > 0)
{
output_stat = write(output_file, buff, (ssize_t) input_stat);
if (output_stat == -1)
{
dprintf(SE, "Error: Can't write to %s\n", argv[2]);
exit(99);
}
}
} while (input_stat > 0);
input_stat = close(input_file);
if (input_stat == -1)
dprintf(SE, "Error: Can't close fd %d\n", input_file), exit(100);
if (input_stat == -1)
dprintf(SE, "Error: Can't close fd %d\n", input_file), exit(100);
output_stat = close(output_file);
if (output_file == -1)
dprintf(SE, "Error: Can't close fd %d\n", output_file), exit(100);
return (0);
}
