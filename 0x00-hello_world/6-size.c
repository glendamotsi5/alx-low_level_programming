#include <stdio.h>
/**
  * main - a program that prints a line with printf function
  * Return : Always 0 (success)
  */
int main(void)
{
	printf("Size of a char: %ld byte(s)", sizeof(char));
	printf("size of an int: %ld byte(s)", sizeof(int));
	printf("Size of a long int: %ld byte(s)", sizeof(long int));
	printf("Size of a long long int: %ld byte(s)", sizeof(long long int));
	printf("size of a float: %ld bytes(s)", sizeof(float));
	return (0);
}
