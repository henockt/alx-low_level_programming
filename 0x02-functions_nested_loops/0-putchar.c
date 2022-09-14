#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}

/**
 * main - Prints '_putchar' to stdout
 *
 * Return - 0 always.
 */
int main(void)
{
char a[] = "_putchar\n";
for (int i = 0; i < 9; i++)
{
putchar(a[i]);
}
return (0);
}
