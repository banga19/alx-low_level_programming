#include "main.h"

/**
 * main - This is the entry point
 *
 * Return: Always 0 (success).
 *
 */
void print_alphabet_x10(void)
{
	char alphabet;
	int counter;

	counter = '0';

	while (counter <= 10)
	{
		alphabet = 'a';
		while (alphabet <= 'z')
		{
			_putchar(alphabet);
			alphabet++; /* inner loop counter */
		}
			_putchar('\n');
			counter++; /* outer loop counter */

	}
}
