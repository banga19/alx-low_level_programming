#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * main - Entry point for the program
 *
 * 0-postive_or_negative: function tests whether a number is postive
 * or negative
 *
 * return (0) - Always zero unless program displays error
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n >	0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("Invalid output, Try again!");

	return (0);
}
