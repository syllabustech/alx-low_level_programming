#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * @ch: params of the alphabet
 *
 * Return: Always 0 (Success)
 */
 int main(void)
{
	int ch;
	/* this display alphabet in lowercase*/
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
		putchar('\n');
	}
	return (0);
}
