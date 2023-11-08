#include "3-calc.h"
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
/**
* op_add - Sum of two numbers
* @a: number
* @b: number
* Return: sum of the two numbers
*/
int op_add(int a, int b)
{
return (a + b);
}
/**
* op_sub - difference of two numbers
* @a: number
* @b: number
* Return: difference of the two numbers
*/
int op_sub(int a, int b)
{
return (a - b);
}
/**
* op_mul - product of two numbers
* @a: number
* @b: number
* Return: product of the two numbers
*/
int op_mul(int a, int b)
{
return (a * b);
}
/**
* op_div - division of two numbers
* @a: number
* @b: number
* Return: division of the two numbers
*/
int op_div(int a, int b)
{
return (a / b);
}
/**
* op_mod - modulus of two numbers
* @a: number
* @b: number
* Return: modulus of the two numbers
*/
int op_mod(int a, int b)
{
return (a % b);
}
