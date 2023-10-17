#include main.h
/**
 * _putchar - writes the character c in stdout
 * @c: character
 * Return: 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
