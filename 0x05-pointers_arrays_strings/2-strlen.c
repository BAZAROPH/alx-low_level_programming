#include <stdio.h>

/**
* _strlen - return lenght of param
* @s: is sting references
* Return: length of param
*/
int _strlen(char *s)
{
	int i = 0;
	int cpt = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		cpt++;
	}

	return (cpt);
}
