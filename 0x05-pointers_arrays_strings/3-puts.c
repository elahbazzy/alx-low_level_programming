#include <stdio.h>
#include "main.h"

/**
 *_puts - prints a string
 * @str: string to print
 *
 * Description: prints a string
 * On success: returns no error
 */

void _puts(char *str)
{
	int index;

	for(index =0; str[index] != '\0';index++)
	{
		_putchar(str[index]);
	}	
	putchar('\n');
}
