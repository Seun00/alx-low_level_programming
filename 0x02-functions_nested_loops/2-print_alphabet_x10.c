#include "main.h"
/**
 * print alphabet_x10 - print alphabet 10 times
 *
 * Return: Always 0;
 *
 */
void print_alphabet_x10(void)
{
	char i;
	char h;

	for (h = 0; h <= 9; h++)
	{
		for (i = 'a'; i <= 'z'; 1++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
