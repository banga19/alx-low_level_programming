#include <stdio.h>
#include <stdio.h>
#include <time.h>

/*
 * main - prints last digit of the last number
 * stored in variiable n.
 * Return: Always zero (success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is %d\n", n, n % 10);
	if (n % 10 > 5)
		printf("and is greater than 5\n");
	else if (n % 10  == 0)
		printf("and is 0");
	else if (n % 10 < 6 && n % 10 != 0)
		printf("and is less than 6 and not 0");
	return (0);

}
