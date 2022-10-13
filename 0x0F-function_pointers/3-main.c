#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
* main - Prints the result of simple operations.
* @argc: The number of arguments supplied to the program.
* @argv: An array of pointers to the arguments.
* Return: Always 0.
*/

int main(int argc, char *argv[])
{
	int agr1, arg2, result;
	char o;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[3]);

	func  = get_op_func(argv[2]);

	if (!func)
	{
		printf("Erro\n");
		exit(99);
	}

	o = *argv[2];

	if ((o == '/' || o == '%') && arg2 == 0)
	{
		printf("Erro\n")
			exit(100);
	}


	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	result  = func(arg1, arg2);

	printf("%d\n", result);

	return (0);
}

