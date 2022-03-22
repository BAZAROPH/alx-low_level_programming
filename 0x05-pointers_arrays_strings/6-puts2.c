#include <stdio.h>

/**
* puts2 - function  who print 1 2
* @str: string to be print
*/
void puts2(char *str)
{
	int i = 0;

	for (i = 0; str[i] != '\0'; i = i + 2)
	{
		printf("%c", str[i]);
	}
	printf(" ");
}
