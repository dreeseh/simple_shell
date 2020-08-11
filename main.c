#include<stdio.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
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

	(void)wpid;
	(void)argc;
	_prompt();
	pid = fork();
	if (pid == 0)
	{
		if (execv(argv[1], argv) == -1);
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
		printf("parent process sucessful");
	}
	return 1;
}
