#ifndef _SHELL_H_
#define _SHELL_H_

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
/* #include <readline/readline.h> */



/* prototypes */

int _putchar (char c);
int readbuff(char* str);
void execArgs(char** parsed);
void _prompt(void);
int _print_string(char ch);
void _printf(char *string);

#endif
