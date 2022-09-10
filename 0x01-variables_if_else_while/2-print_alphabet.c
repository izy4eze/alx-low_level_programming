#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Entry point
* This programe print letters in uppercase
* Return: Always 0 (success)
*eslint no-trailing-spaces: ["error", { "skipBlankLines": true }]
*/

int main(void)
{
	char low;

	for (low  = 'a'; low <= 'z'; low++)
	putchar(low);
	putchar('\n');

	return (0);
}

