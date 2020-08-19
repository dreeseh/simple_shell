#include "shell.h"

/**
 * error_return - displays error code if main fails
 * @cmd: input from command prompt
 * @ret_val: determined value to be printed
 * @arg: argument value
 *
 * Return: no return
 */

void error_return(char *cmd, int ret_val, char **arg)
{
	_printf(cmd);
	_printf(": ");
	_print_string(ret_val + '0');
	_printf(": ");
	_printf(*arg);
	_printf(": ");
}
