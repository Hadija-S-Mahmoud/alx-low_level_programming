#include <stdio.h>
void first(void) __attribute__ ((constructor));
/**
* before - function that prints a sentence before main
* function is executed
*/
void before(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
