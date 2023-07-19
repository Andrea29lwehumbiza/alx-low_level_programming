#include <stdio.h>

/**
 * main - prints numbers from 0 to 9
 * Return: 0
 */

int main(void)
{

char i;

printf("Numbers from 0 to 9:\n");

for (i = '0'; i <= '9'; i++)
{
	putchar(i);
}

putchar('\n');

return (0);
}
