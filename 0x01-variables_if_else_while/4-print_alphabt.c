#include <stdio.h>

/**
 * main -print lower case and upper case but not e and q
 *
 * Return: 0 always
 *
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
			putchar(letter);
	}
	putchar('\n');
	return (0);
}
