#include <stdio.h>

/*
 * main -Entry point
 * Description: program will print alphabets in lowercase then in uppercase,
 * followed by a new line.
 *
 * Return: Always 0 
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}

	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}

	return (0);
}
