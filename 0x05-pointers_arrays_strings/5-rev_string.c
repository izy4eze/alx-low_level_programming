#include "main.h"
#include<stdio.h>

/**
 * rev_string - a function that reverse a string
 * followed by a new line
 * @s: an input string.
 * Return: Always 0
 */

void rev_string(char *s)
{
	int len, j;
	char a;

	len = 0;

	while (*(s + len) != '\0')
	{
		len++;
	}

	for (j = 0; j < (length / 2); j++)

	{
		a = *(s + j);
		*(s + j) = *(s + length - j - 1);
		*(s + length - j - 1) = a;	
	}
}
