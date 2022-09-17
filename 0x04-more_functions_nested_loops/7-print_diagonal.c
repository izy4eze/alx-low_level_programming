#include"main.h"
#include<stdio.h>

/**
* print_square - prints a square. followed by new line
* @size: size of the square
*/

void print_square(int size)
{
	if (size  <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int  i, j;

		for (i = 0; i < size; i++)
		{
			for (j = 0; i < size; i++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}	
