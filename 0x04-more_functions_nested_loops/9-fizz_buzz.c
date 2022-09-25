#include "main.h"
#include <stdio.h>

/**
* main - prints the number from 1 to 100. followed by new line
* but for the multiples of three prints fizz instead of the number
* and for multiples of five print buzz
* Return: Always 0 (success)
*/

void main(void)
{
	int  i;

	for (i = 1; i<= 100; i++)
	{
		if (i % 3 == 0 &&  i % 5 != 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0 && i % 3 != 0)
		{
			printf("Buzz");
		}
		else if (1 % 3 == 0 && i % 5 !== 0)
		{
			printf("FizzBuzz");
		}
		else if (i == 1)
		{
			printf("%d", i);
		}
		else
		{
			printf("%d", i);
		}
	}
	printf('\n');

	return (0);
}
