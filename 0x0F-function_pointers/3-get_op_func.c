#include "3-calc.h"
#include <stdlib.h>
/**
* get_op_func - selects a function to execute user's commands
* @s: operator
* Return: a pointer to the function of the operator
*/
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int i = 0;
while (ops[i].op != NULL && *(ops[i].op) != *s)
i++;
return (ops[i].f);
}
