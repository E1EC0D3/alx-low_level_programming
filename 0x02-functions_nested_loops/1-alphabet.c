#include "main.h"
#include <unistd.h>

/**
 * print_alphabet - Entry point
 * Return:0
 */

void print_alphabet(c)
{
	char c = 'a';

	while (c <='z')
	{
		putchar(c);
		c++;

	}
	putchar('\n');

}
