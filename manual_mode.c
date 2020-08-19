#include "shell.h"

/**
 * manual_mode - runs the shell in either interactive or manual mode
 * @argc: int type pointer to arg count
 * @argv: char type pointer to arg vectors
 * Return: no return
 */

void manual_mode(int argc, char *argv[])
{
	pid_t pid, wpid;
	int status;

	(void)wpid;

	if (argc >= 2)
	{
		pid = fork();
	}
/* child process */
	if (pid == 0)
	{
		if (execve(argv[1], argv, NULL) == -1)
		{
			perror("command not found");
		}
	}
/* error forking */
	else if (pid < 0)
		perror("err with child process");
/*  parent process */
	else
	{
		do {
			wpid = waitpid(pid, &status, WUNTRACED);
		} while (!WIFEXITED(status) && !WIFSIGNALED(status));
		exit(EXIT_SUCCESS);
		WSTOPSIG(status);
	}
}
