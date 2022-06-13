#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * main - Assigns a random number to varibale `n` each time 
 * the program is executed 
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
