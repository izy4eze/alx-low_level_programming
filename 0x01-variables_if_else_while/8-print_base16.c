#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Entry point
* This program prints all number
* Return: Always 0 (success)
*/

int main(void)
{
	int d;
	int low;

	for (d = '0'; d <= '9'; d++)
		putchar(d);
	for (low = 'd'; low <= 'f'; low++)
		putchar(low);
	putchar('\n');

	return (0);
}
