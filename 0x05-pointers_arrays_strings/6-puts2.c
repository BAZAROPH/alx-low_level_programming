#include <stdio.h>
#include <string.h>

/**
* puts2 - function  who print 1 2
* @str: string to be print
*/
void puts2(char *str)
{
	int i, l, x;

	l = strlen(str);

	for (i = 0; i < l; i = i + 2)
	{
		printf("%c", str[i]);
	}
	printf(" ");
}
