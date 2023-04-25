#include <stdio.h>
#include <stdlib.h>

/**
  * main - returns alphabets
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	char alph[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar (alph[i]);
	}
}
