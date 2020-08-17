#include "shell.h"
/**
* _strlen - return length string
* @s: target string
*
* Return: length value
*
*/
int _strlen(char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; len++)
		;
	return (len);
}


#include "holberton.h"

/**
*_strncpy - copies string
*@src:  Pointer to input string
*@dest: Pointer to output string
*@n: Bytesize of src
*
* Return: Pointer to destination
*/

char *_strncpy(char *dest, char *src, int n)

{
	int i;
	int lensrc = _strlen(src);

	for (i = 0; i <= n; i++)
	{
		if (i >= lensrc)

			dest[i] = '\0';

		else

			dest[i] = src[i];
	}
	return (dest);
}

#include "holberton.h"
/**
* _strcat - Convolves two strings
* @dest: output string
* @src: input string
*
* Return: pointer to destination
*/

#include "holberton.h"

/**
 * _strncat - Function that convolves two strings
 * @dest: output string pointer
 * @src: input string pointer
 * @n: num bytes from src
 *
 * Return: pointer to output
 */

char *_strncat(char *dest, char *src, int n)

{
	int x = 0;
	int y = 0;

	while (*(dest + x))
		x++;
	while ((src + y < src + n) && *(src + y) != '\0')
	{
		*(dest + x) = *(src + y);
		x++;
		y++;
	}
	return (dest);
}
