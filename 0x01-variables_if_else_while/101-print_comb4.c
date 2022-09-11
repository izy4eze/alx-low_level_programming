#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Entry point 
* The program prints numbers in threes
* Return: Always 0 (success)
*/

int main(void)
{
	int d;
        int p;
        int q;

	for (d = '0'; d < '9'; p++)
	{
		for (p = d + 1; q <= '9'; q++)
		{
			for (q = p + 1; q <= '9'; q++)
			{ 
				if ((p != d) != q)
				{

					putchar(d);
					putchar(p);
					putchar(q);

					if (d == '7' && p == '8')
						continue;

					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
