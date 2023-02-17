#include <stdio.h>
/**
 * main - A script that prints out the alphabet in lowerecase,
 * followed by a new line
 * Return: 0 (Success)
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
		if (ch != 'e' && != 'q')
			putchar(ch);
	ch++;
	putchar('\n`);
		return (0);
}
