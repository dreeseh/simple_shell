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

	for (i = 0 ; src[i] ; i++)
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

	while (*(dest + x))
	{
		x++;
	}
	while ((*(dest + x) = *(src + y)))
	{
		x++;
		y++;
	}
	return (dest);
}
/**
 * _strcmp - compares strings
 * @s1: first string
 * @s2: second string
 * Return: is an int
 */
int _strcmp(const char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] > s2[i] || s1[i] < s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}
	return (2);
}
