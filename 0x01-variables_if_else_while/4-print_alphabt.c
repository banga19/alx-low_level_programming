#include <stdio.h>

/*
 * main - Entry point
 * Description - program prints alphabets in lowercase, followed
 * by a new line, except letters `q` and `e`
 *
 * Return: Always (0) unless error
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'q' && ch != 'e')
		{
			putchar(ch);
		} else
		{
			putchar('\n');
		}
	}
	return (0);
}
