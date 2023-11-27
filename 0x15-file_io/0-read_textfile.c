#include "main.h"
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <stdlib.h>
/**
* read_textfile - function that reads a text file and prints it
* to the POSIX standard output.
* @filename: name of the file
* @letters: number of letters
* Return: 0
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
int file_h;
ssize_t lenr, lenw;
char *buff;
if (filename == NULL)
return (0);
file_h = open(filename, O_RDONLY);
if (file_h == -1)
return (0);
buff = malloc(sizeof(char) * letters);
if (buff == NULL)
{
close(file_h);
return (0);
}
lenr = read(file_h, buff, letters);
close(file_h);
if (lenr == -1)
{
free(buff);
return (0);
}
lenw = write(STDOUT_FILENO, buff, lenr);
free(buff);
if (lenr != lenw)
return (0);
return (lenw);
}
