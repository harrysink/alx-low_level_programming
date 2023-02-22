#include "3-calc.h"

/**
 * op_add - this function adds two integers and returns their sum
 * @a: first integer to add
 * @b: second integer to add
 *
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - this function subtracts one integer from the other and returns
 * their difference
 * @a: first integer to subtract with
 * @b: second integer to subtract
 *
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - this function mutliplies two integers and returns their product
 * @a: first integer to multiply with
 * @b: second integer to multiply
 *
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - this function divides one iinteger by another and returns their
 * quotient
 * @a: integer to be divided
 * @b: integer to divide with
 *
 * Return: the quotient of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod -  this function rreturns the remainder of a division operation
 * @a: integer to be divided
 * @b: integer to divide with
 *
 * Return: the remainder of the division of a by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
