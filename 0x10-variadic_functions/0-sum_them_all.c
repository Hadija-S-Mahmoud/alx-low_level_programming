#include "variadic_functions.h"
#include <stdarg.h>
/**
* sum_them_all - function that returns the sum of all its parameters.
* @n: parameters passed to the function
* @...: variable
* Return: If n == 0, return 0
*/
int sum_them_all(const unsigned int n, ...)
{
va_list h;
unsigned int a, sum = 0;
va_start(h, n);
for (a = 0; a < n; a++)
sum += va_arg(h, int);
va_end(h);
return (sum);
}
