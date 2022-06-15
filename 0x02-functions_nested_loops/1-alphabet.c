#include "main.h"

/**
 * print_alphabet - the function will print all the alphabets from a-z
 * in lowecase
 *
 * Return: void (no data type identifier is used )
 */

void print_alphabet(void)
{

	char alphabet;

	alphabet = 'a';

	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet++;
	}

	_putchar('\n');
}
