#include "main.h"

/**
 * main - print putchar
 *
 * Return: 0
*/
int main(void)
{
	char *str = "_putchar";

	while (*str)
		_putchar(*str++);
	_putchar('\n');
	return (0);
}
