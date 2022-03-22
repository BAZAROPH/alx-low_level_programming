#include <stdio.h>
#include <string.h>
/**
* rev_string - reverse string
* @s: is string to reverse
*/
void rev_string(char *s)
{
	int cpt = strlen(s);

	int i = 0;

	if (cpt > 0)
	{
		for (i = cpt; i >= 0; i--)
		{
			printf("%c", s[i]);
		}

		printf("\n");
	}
}
