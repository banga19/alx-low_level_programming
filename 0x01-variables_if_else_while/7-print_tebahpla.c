#include <stdio.h>

/*
 * main - print letters of the alphabet
 *
 * Description: prints letter in lowercase then in reverse order
 *
 * return: Always 0 (success)
 */

int main(void)
{
	int i = 22;

	while (i > 96)
	{
		putchar(i);
		i--;
	}
	putchar(10);
	
	return (0);
}
