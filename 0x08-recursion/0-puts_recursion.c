#include<stdio.h>
#include "main.h"
#include <string.h>

/**
* _puts_recursion: prints a string, followed by a new line.
* @s: is a string to print
*/

void _puts_recursion(char *s)
{
	printf("%c", s[0]);
	int size = strlen(s);

	if (size > 0)
	{
		int a = 0;
		char d[300];

		for (int i = 1 ; i <= size; i++)
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
