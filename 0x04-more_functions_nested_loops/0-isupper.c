#include"main.h"
#include<stdio.h>

/**
*_isupper - A function that checks for uppercase character
*@c: character to be teste
*Return: 1 if c uppercase or c otherwise
*  otherwise always  0 (success)
*/

int _isupper(int c)
{

	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);

}
