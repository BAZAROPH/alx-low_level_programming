#include <stdio.h>

/**
* print_rev - print reverse of param
* @s: is strinf to reverse
*/
void print_rev(char *s)
{
	int i = 0;

	for (i = _strlen(s) - 1; i >= 0; i--)
	{
		printf("%c", s[i]);
	}

	printf("\n");
}
