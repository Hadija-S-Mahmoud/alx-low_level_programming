#include "main.h"
/**
* flip_bits - returns the number of bits you would need to flip
* to get from one number to another
* @n: first number
* @m: sec number
* Return: number of bits to change
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int i, cntbit = 0;
unsigned long int curr;
unsigned long int exc = n ^ m;
for (i = 63; i >= 0; i--)
{
curr = exc >> i;
if (curr & 1)
cntbit++;
}
return (cntbit);
}
