#include <stdio.h>
/**
 * main  print the hexadecimal numbers
 * code by Mntesnot
 * Return: 0
 */
int main(void)
{
	int letter

	for (digit = '0'; digit <= '9'; digit++)
	{
	putchar(digit);
	if (digit == '9')
		{
			digit = 'a';
			for (; digit <= 'f'; digit++)
			{
				putchar(digit);
			}
			break;
		}
	}
	putchar('\n');
	return (0);
}	
