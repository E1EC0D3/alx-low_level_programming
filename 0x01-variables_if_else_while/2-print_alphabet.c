#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>
/**
*main - Program to print alphabet letter followed by new line
*main - Prints the last digit of random number
*
*Return: return 0
*Return: Return 0
*/
int main(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;

	if (last == 0)
	{
		letter = tolower(letter);
		putchar(letter);
		printf("Last digit of %d is %d and is 0\n", n, last);
	}
	putchar('\n');
	return(0);
	else
	{
		if (last > 5)
		{
			printf("Last digit of %d is %d and is greater than 5\n", n, last);
		}
		else if (last < 6)
		{
			printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last);
		}
	}
	return (0);
