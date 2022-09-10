#include <stdio.h>

/**
* main - Entry point
* This program prints
* Return: Always 0 (success)
*/

int main(void)
{
	int d;
	char low;

	for (d = '0'; d <= '9'; d++)
		putchar(d);
	for (low = 'd'; low <= 'f'; low++)
		putchar(low);
	putchar('\n');

	return (0);
}
