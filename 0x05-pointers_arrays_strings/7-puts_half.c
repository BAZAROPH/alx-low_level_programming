#include <stdio.h>
#include <string.h>
/**
* puts_half - print hal of string
* @str: string to be print
*/
void puts_half(char *str)
{
	int i;

	for (i = (strlen(str) / 2); i != 0; i--)
	{
		printf("%c", str[i]);
	}
	printf("\n");
}
