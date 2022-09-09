#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Entry point
* This programe print letters in uppercase
* Return: Always 0 (success)
*/

int main(void)
{
	char low;

	for (low  = 'a'; low <= 'z'; low++)
		putchr(low);
        	purchar('\n');
		
	return (0);
}

