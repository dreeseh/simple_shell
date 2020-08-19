#include "shell.h"
#define BUFFER 255
/**
 * _command_prompt - gives $ and takes input
 * Return: input pointer
 */
char _command_prompt(void)
{
	char input[BUFFER + 1] = { 0x0 };
	char *input_pointer = input;
	size_t length = BUFFER;
	int endoffile;

	_prompt();
	endoffile = getline(&input_pointer, &length, stdin);
	if (endoffile == EOF)
	{
		exit(EXIT_SUCCESS);
	}
	input[_strlen(input) - 1] = '\0';
	return (*input_pointer);
}
