#include <unistd.h>

/**
* _putchar - writes the character c to stdout
* @c: The character to print 
* Return: on success  1
* on erro, -1 is return, and erro is set appropriately
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}


