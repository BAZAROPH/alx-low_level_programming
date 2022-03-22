#include <stdio.h>

/**
* _puts - prints a string, followed by a
* new line, to stdout
* @str: is string
*/
void _puts(char *str)
{
	int i = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		printf("%c", str[i]);
	}

	printf("\n");
}
