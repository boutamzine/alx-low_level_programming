#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * Description : print alphabet in lowercase then in uppercase
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	char ch = 'a';
	char CH = 'A';

	/*prints a -z*/
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	/*print A - Z*/
	while (CH <= 'Z')
	{
		putchar(Ch);
		CH++;
	}
	putchar('\n');
	return (0);
}
