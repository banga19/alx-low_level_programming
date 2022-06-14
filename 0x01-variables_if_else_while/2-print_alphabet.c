#include <stdio.h>
#include <stdlib.h>

/*
 * main - function prints alphabets from a to z in lowercase
 *
 * Return: Always 0 (succes)
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
		putchar('\n');
	}
	return (0);
}
