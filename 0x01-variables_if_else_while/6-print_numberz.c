#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Entry point
* This programe prints all single digits
* Return: Always 0 (success)
*/

int main(void)
{
	int d;

	for (d = '0'; d <= '9'; d++)
		putchar(d);
	putchar('\n');

	return (0);
}
