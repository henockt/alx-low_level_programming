#include <stdio.h>

/**
 * main - Prints a custom string to stderr
 *
 * Return: 1 always
 */
int main(void)
{
char p[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
fwrite(p, 59, 1, stderr);
return (1);
}
