#include <stdio.h>
/**
 * main - Entry point
 * Description - A program that prints 'alphabets in lowercase and uppercase'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar('a' + i);
	}

	for (i = 0; i < 26; i++)
	{
		putchar('A' + i);
	}
	putchar('\n');
return (0);
}
