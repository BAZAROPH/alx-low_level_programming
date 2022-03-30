#include<stdio.h>
#include "main.h"
#include <string.h>

/**
* _puts_recursion: prints a string, followed by a new line.
* @s: is a string to print
*/

void _puts_recursion(char *s)
{
	int i = 0;
	int a = 0;
	char d[300];
	int size = strlen(s);

	printf("%c", s[0]);
	if (size > 0)
	{
		for (i = 1 ; i <= size; i++)
		{
			d[a] = s[i];
			a++;
		}
		_puts_recursion(d);
	}
	if (size == 0)
	{
		printf("\n");
	}
}
