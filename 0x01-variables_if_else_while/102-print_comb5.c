#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints all possible combinations of two two-digit numbers.
 *
 * Return: 0=success
 */

int main(void)
{
	int d1, d2, d3, d4;

		while (d1 <= 9)
		{
			while (d2 <= 9)
			{
				if (d1 <= d3)
				{
					while (d3 <= 9)
					{
						d4 = 0;
						while (d4 <= 9)
						{
							if (d2 >= d4)
							d4 = d2 + 1;
							putchar(d1 + '0');
							putchar(d2 + '0');
							putchar(' ');
							putchar(d3 + '0');
							putchar(d4 + '0');
							if (d1 + d2 + d3 + d4 < 35)
							{
								putchar(',');
								putchar(' ');
							}
							d4++;
						}
						d3++;
					}
				}
				d2++;
			}
			d1++;
		}

return (0);
}

