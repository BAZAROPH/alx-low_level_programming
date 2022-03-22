#include <stdio.h>
#include <string.h>
/**
* puts_half - print hal of string
* @str: string to be print
*/
void puts_half(char *str)
{
	int i, l;

	l = strlen(str) / 2;

	for (i = 0; i < l; i++)
	{
		printf("%c", str[i]);
	}
	printf("\n");
}
