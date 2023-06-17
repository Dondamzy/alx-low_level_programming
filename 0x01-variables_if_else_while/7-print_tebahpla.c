#include <stdio.h>
/**
 * main - Entry point
 * Description - prints the lowercase alphabet in reverse
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char mg;

	for (mg = 'z'; mg >= 'a'; mg--)
	{
		putchar(mg);
	}
	putchar('\n');
return (0);
}
