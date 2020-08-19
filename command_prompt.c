#include "shell.h"
#define BUFFER 255

/**
 * _command_prompt - generates the prompt and waits for user input
 *
 *
 * Return: input_pointer
 */

char *_command_prompt(void)
{

	char input[BUFFER + 1] = { 0x0 };
	char *input_pointer = input;
	size_t length = BUFFER;
	FILE *stream = stdin;

	_prompt();
	getline(&input_pointer, &length, stream);
	input[_strlen(input) - 1] = '\0';
	/* execvp(input, (char *[]){input, NULL}); */
	return (input_pointer);

}
