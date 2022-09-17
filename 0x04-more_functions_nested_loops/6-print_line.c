#include"main.h"
#include<stdio.h>

/**
* print_line -  draws a straight line in a terminal
* @n: number of times the character_should be pritned
*/

void print_line(int n)
{
	if (n <= 0 )
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 1; i <=n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
