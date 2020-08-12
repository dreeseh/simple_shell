#include "shell.h"
/**
 * _print_string - replicates the putchar function
 *
 * Return: Character write
 */
int _print_string(char ch)
{
	return (write(1, &ch, 1));
}

/**
 * _printf - replicates the puts function
 *
 * Return: no return
 */
void _printf(char *string)
{
	int i;

	for (i = 0 ; string[i] != '\0' ; i++)
	{
		_print_string(string[i]);
	}
}
