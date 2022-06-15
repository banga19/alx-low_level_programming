#include "main.h"

/**
 * main - This is the entry point for the whole program
 *
 * Description - This program has a function to print '_pucthar'
 * on the screen (stdout)
 *
 * Return: Always return 0 (Success)
 */


int main(void)
{
	char text[9] = "_putchar";
	int i = 0;

	for (i = 0; i < 8; i++)
	{
		_putchar(text[i]);
	}
	_putchar('\n');


	return (0);
}
