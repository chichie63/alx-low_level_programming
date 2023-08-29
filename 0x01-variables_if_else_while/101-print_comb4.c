#include <stdio.h>

/**
 * main -  prints all possible different combinations of three digits
 * Return: 0
 */
int main(void)
{
	int c = '0';

	for (c = '0'; c <= '9'; c++)
	{
		int b = '0';

		for (b = '0'; b <= '9'; b++)
		{
			int a = '0';

			for (a = '0'; a <= '9'; a++)
			{
				if (!((a == b) || (b == c) || (b > a) || (c > b)))
				{
					putchar(c);
					putchar(b);
					putchar(a);
					if (!(a == '9' && c == '7' && b == '8'))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
