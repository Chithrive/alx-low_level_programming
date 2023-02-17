#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: 0 on success
 */
int main(void)
{
int i;
for (i = 0; i < 26; i++)
{
if (i != ('e' - 'a') && i != ('q' - 'a'))
putchar('a' + i);
}
putchar('\n');
return (0);
}
