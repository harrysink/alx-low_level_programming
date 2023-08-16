#include "3-calc.h"

/**
 * *get_op_func - this function selects the correct function to perform the
 * operation asked by the user
 * @s: operator in functions selected by user
 *
 * Return: the result of the function selected by the user carried out on the
 * two integers
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
	int i;

	i = 0;

	while (ops[i].op)
	{
		if (strcmp(ops[i].op, s) == 0)
			return (ops[i].f);
		i++;
	}

	return (NULL);
}
