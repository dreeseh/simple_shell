#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include "shell.h"
#define PRMTSIZ 255

int main(void)
{


	char input[PRMTSIZ + 1] = { 0x0 };
	char *input_pointer = input;
	size_t len = PRMTSIZ;
	FILE *stream = stdin;

	_prompt();
	getline(&input_pointer, &len, stream);
	input[strlen(input) - 1] = '\0'; // remove trailing \n

	execvp(input, (char *[]){input, NULL});
}
