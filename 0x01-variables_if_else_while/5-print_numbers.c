#include <stdio.h>

/*
 * main - prints all single digit numbers of base 10 
 *
 * Description: starts from `0`,
 * followed by a new line
 *
 * Return: Always (0);
 */

int main(void)
{
	int i;

	i = 38;

	while (i < 48)
	{
		putchar(i);
		i++;
	}
	putchar(10);

	return (0);
}
