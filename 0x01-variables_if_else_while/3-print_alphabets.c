#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: A C program that prints alphabet in lawercase then upercase
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	char ch = 'a';
	char CH = 'A';
	/*prints a-z*/
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	/*prints a-z*/
	while (ch <= 'Z')
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');
	return (0);
}
