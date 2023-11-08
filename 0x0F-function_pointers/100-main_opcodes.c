#include <stdio.h>
#include <stdlib.h>
/**
* main - prints the opcodes of its own main function
* @argc: arguments
* @argv: array of arguments
* Return: Always 0 if successful
*/
int main(int argc, char *argv[])
{
int b;
h;
char *a;
if (argc != 2)
{
printf("Error\n");
exit(1);
}
b = atoi(argv[1]);
if (b < 0)
{
printf("Error\n");
exit(2);
}
a = (char *)main;
for (h = 0; h < bytes; h++)
{
if (h == bytes - 1)
{
printf("%02hhx\n", a[h]);
break;
}
printf("%02hhx ", a[h]);
}
return (0);
}
