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

	char cmd[100];
	char *arg[MAXARG + 1] = {NULL};
	char input[BUFFER + 1] = {0x0};
	char *input_pointer = input;
	char *p = input;
	size_t length = BUFFER;
	int ret_val, endoffile;


/*	char *env[] = { (char *) "PATH=/bin", 0 }; */
	while (1)
	{
		manual_mode(argc, argv);
		_prompt();
		endoffile = getline(&input_pointer, &length, stdin);
		if (endoffile == EOF)
		{
			exit(EXIT_SUCCESS);
		}

		input[_strlen(input) - 1] = '\0';

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

		/* child process */
		if (pid == 0)
		{
			if (_strcmp (*arg, "exit") == 2) break;
			_strcpy(cmd, "/bin/");
			_strcat(cmd, *arg);
			if (execve(cmd, arg, NULL) == -1)
			{
				ret_val = 1;
				error_return(cmd, ret_val, arg);
				perror("not found");
			}
		}
		/* error forking */
		else if (pid < 0)
			perror("err with child process");

		/*  parent process */
		else
		{
			do
			{
				wpid = waitpid(pid, &status, WUNTRACED);
			}
			while (!WIFEXITED(status) && !WIFSIGNALED(status));
			if (_strcmp (*arg, "exit") == 2) break;
			ret_val = 0;
		}
	}
	return (ret_val);
}
