#include "shell.h"
/**
*_strcpy - copies string
*@src:  Pointer to input string
*@dest: Pointer to output string
* Return: Pointer to destination
*/
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
/**
 * _strcat - Function that convolves two strings
 * @dest: output string pointer
 * @src: input string pointer
 * Return: pointer to output
 */
char *_strcat(char *dest, char *src)
{
	int x = 0;
	int y = 0;

	while (dest[x] != '\0')
	{
		x++;
	}
	while (src[y] != '\0')
	{
		dest[x + y] = src[y];
		y++;
	}
	return (dest);
}
