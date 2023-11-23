#include "main.h"
/**
* _pow - function that calculates the base power
* @power: power of the number
* @base: base of the number
* Return: value of the base power
*/
unsigned long int _pow(unsigned int base, unsigned int power)
{
unsigned long int nom;
unsigned int i;
nom = 1;
for (i = 1; i <= power; i++)
nom *= base;
return (nom);
}
/**
* print_binary - prints the binary representation of a number.
* @n: number printed
* Return: void
*/
void print_binary(unsigned long int n)
{
unsigned long int divisor, check;
char flag;
flag = 0;
divisor = _pow(2, sizeof(unsigned long int) * 8 - 1);
while (divisor != 0)
{
check = n & divisor;
if (check == divisor)
{
flag = 1;
_putchar('1');
}
else if (flag == 1 || divisor == 1)
{
_putchar('0');
}
divisor >>= 1;
}
}
