#include "shell.h"
/**
 * _print_string - replicates the putchar function
 * @ch: input string
 * Return: Character write
 */
int _print_string(char ch)
{
	return (write(1, &ch, 1));
}

/**
 * _printf - replicates the puts function
 * @string: input string
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



/**
 * _strlen - String length
 *@s: str
 * Return: length
 */

int _strlen(char *s)
{
	int i = 0;

	for (i = 0; s[i]; i++)
		continue;

	return (i);
}
