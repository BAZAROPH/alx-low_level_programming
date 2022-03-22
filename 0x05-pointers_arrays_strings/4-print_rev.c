#include <stdio.h>

/**
* print_rev - print reverse of param
* @s: is strinf to reverse
*/
void print_rev(char *s)
{
	int i = 0;
	int cpt = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		cpt++;
	}

	int i = 0;

	for (i = cpt - 1; i >= 0; i--)
	{
		printf("%c", s[i]);
	}

	printf("\n");
}
