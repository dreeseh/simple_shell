#include "shell.h"
/**
 *
 *
 *
 */
int _print_string(char ch)
{
	return (write(1, &ch, 1));
}

/**
 *
 *
 *
 */
void _printf(char *string)
{
	int i;

	for (i = 0 ; string[i] != '\0' ; i++)
	{
		_print_string(string[i]);
	}
	_putchar('\n');
}
