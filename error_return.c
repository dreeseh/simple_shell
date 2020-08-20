#include "shell.h"
/**
 * error_return - handles the errors
 * @cmd: string that holds dir and command
 * @ret_val: the return value
 * @arg: the arguments string
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
