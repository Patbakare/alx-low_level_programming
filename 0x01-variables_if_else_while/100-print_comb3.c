#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (Success/correct)
 */
int main(void)
{
	int i;
	int j;

	for ( = 48; i < 58; i++)
	{
		for (j = 48; j <58; j++)
		{
			if (i != j && i < j)
			{
				putchar(i);
				putchar(j);
				if (j == 57 && i == 56)
				{
					break
						;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
