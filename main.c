#define MAXARG 63
#define BUFFER 255
#include "shell.h"
/**
 *
 *
 *
 */
int main(int argc, char *argv[])
{
	pid_t pid, wpid;
	int status;
	unsigned int i = 0;

	char *arg[MAXARG + 1] = {NULL};
	char input[BUFFER + 1] = {0x0};
	char *input_pointer = input;
	char *p = input;
	size_t length = BUFFER;
	FILE *stream = stdin;
	
	_prompt();
	getline(&input_pointer, &length, stream);
	input[_strlen(input) - 1] = '\0';
	/* execvp(input, (char *[]){input, NULL}); */


	(void)argc;
	(void)wpid;

	while (i < sizeof(arg) && *p)
	{
		if (*p == ' ') continue;
		if (*p == '\n') break;
		for (arg[i++] = p ; *p && *p != ' ' && *p != '\n' ; p++);
		*p = '\0';
		p++;
	}

	pid = fork();
	if (pid == 0)
	{
		if (execve(argv[1], arg, env) == -1)
		{
		perror("child process terminated");
		}
	}
	else if (pid < 0)
		perror("err with child process");

	else
	{
		do {
			wpid = waitpid(pid, &status, WUNTRACED);
		}
		while (!WIFEXITED(status) && !WIFSIGNALED(status));
		exit(EXIT_SUCCESS) ; WSTOPSIG(status);
		_printf("parent process sucessful");
	}
	return 1;

}
