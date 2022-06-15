#include "main.h"
#include <stdio.h>

/**
 * main - Checks for a lowercase character
 * @c: the character to check
 * Return: 1 if lowercase, otherwise 0
 *
 */

int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
