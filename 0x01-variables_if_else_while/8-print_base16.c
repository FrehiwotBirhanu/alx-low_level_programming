#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char c;

	int d;

	c = 'a';
	for (d = 0; d < 10; d++)
	{
		putchar(d + '0');
	}
	while
		(c <= 'f') {
			putchar(c);
			c++;
		}
	putchar('\n');
	return (0);
}
