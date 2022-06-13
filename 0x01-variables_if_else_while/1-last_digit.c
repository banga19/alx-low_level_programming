#include <stdio.h>
#include <stdio.h>
#include <time.h>

/*
 * main - Entry point
 *
 * Description: the program will print the last digit stored in variable `n`
 *
 * Return: Always zero (success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;
	if (last_digit > 5)
		printf("last digit of %d is %d and is greater than 5\n", n, last_digit);
	else if (last_digit == 0)
		printf("Last digit of %d is %d and is 0", n, last_digit);
	else if (last_digit < 6 && last_digit == 0)
		printf("Last digit of %d id %d and is less than 6 and not 0", n, last_digit);
	else
		printf("Invalid, try again!");
	return (0);

}
