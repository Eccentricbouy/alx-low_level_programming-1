#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Alphabet lowercase
 *
 * Return: Always 0 (success)
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
	_putchar('\n');
}