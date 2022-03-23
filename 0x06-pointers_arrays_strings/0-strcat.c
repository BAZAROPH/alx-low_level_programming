#include <stdio.h>
#include <string.h>

/**
* _strcat - concate two strings
* @dest: is string
* @src: is string too
* Return: string concat
*/
char *_strcat(char *dest, char *src)
{
	int i = strlen(dest);

	int a = 0;

	for (a = 0; src[a] != '\0'; a++)
	{
		dest[i] = src[a];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
