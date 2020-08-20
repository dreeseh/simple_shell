#include "shell.h"
/**
 * manual_mode - takes input from checker
 * @argc: number of arrays
 * @argv: array of strings
 * Return: none
 */
void manual_mode(int argc, char *argv[])
{
	pid_t pid, wpid;
	int status;

	(void)wpid;
	if (argc >= 2)
	{
		pid = fork();
/* child process */
		if (pid == 0)
		{
			if (execve(argv[1], argv, NULL) == -1)
			{
				perror("command not found");
				exit(EXIT_SUCCESS);
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
}
