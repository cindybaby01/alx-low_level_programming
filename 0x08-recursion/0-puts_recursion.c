#include <stdio.h>
#include "main.h"
/**
 * _puts_recursion - This is the recursive function
 * @s: This is a pointer that receives a string
 */


void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}


	else
		_putchar('\n');
}
