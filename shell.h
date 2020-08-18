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

char *_strncpy(char *dest, char *src, int n);
int _strlen(char *s);
char *_strncat(char *dest, char *src, int n);
int _putchar (char c);
int readbuff(char* str);
void execArgs(char** parsed);
void _prompt(void);
int _print_string(char ch);
void _printf(char *string);
int _strlen(char *s);
char* _command_prompt(void);
char *_strcpy(char *dest, char *src);
char *_strcat(char *dest, char *src);
int _strcmp(const char *s1, char *s2);
void manual_mode(int argc, char *argv[]);
void error_return(char* cmd, int ret_val, char** arg);


#endif
