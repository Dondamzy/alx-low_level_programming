#include <stdio.h>
/**
 * main - Entry point
 * Declaration - 'print alphabets in lowercase'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 97; i < 123; i++)

	{
		if (i != 101 && i != 113)

		{
			putchar(i);
		}
	}
return (0);
}
