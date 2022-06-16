#include "main.h"
#include <stdio.h>
#include <ctype.h>

/*
 * main - checks if char type variable is in uppercase 
 * or not
 *
 * Return: Always (0);
 */


int main(void)
{
	char ch = 'a';

	if (isupper(ch))
		printf("A: 1 \n");
	else 
		printf("a: 0 \n");
	
	return (0);
}
