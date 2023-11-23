#include "main.h"
/**
* binary_to_uint - converts a binary number to an unsigned int
* @b: pointer to a string of 0 and 1 chars
* Return: converted number of 0 if
* there's one or more chars in b that's not 0 or 1
* b is null
*/
unsigned int binary_to_uint(const char *b)
{
int i;
unsigned int nom;
nom = 0;
if (!b)
return (0);
for (i = 0; b[i] != '\0'; i++)
{
if (b[i] != '0' && b[i] != '1')
return (0);
}
for (i = 0; b[i] != '\0'; i++)
{
nom <<= 1;
if (b[i] == '1')
nom += 1;
}
return (nom);
}
