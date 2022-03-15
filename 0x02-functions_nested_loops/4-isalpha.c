#include "main.h"

/**
 * _isalpha - checks for alphabet character
 * @c: the character to check
 * Return: 1 if c is is alphabet, 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
