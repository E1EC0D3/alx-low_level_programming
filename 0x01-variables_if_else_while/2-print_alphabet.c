#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main - Prints the last digit of random number
*
*Return: Return 0
*/
int main(void)
{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;

	if (last == 0)
	{
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
			printf("abcdefghijklmnopqrstuvwxyz\n", n, last);
		}
	}
	return (0);
}
