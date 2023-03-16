#include <stdio.h>
/**
 * main - a C program that prints the size of various type
 * Return: 0 (Success)
 */
int main(void)
{
	char integerType;
	int integerType;
	long int integerType;
	long long int intergerType;
	float intergerType;

printf("Size of a char: %ld byte(s)\n", sizeof(char));
printf("Size of a int: %ld byte(s)\n", sizeof(int));
printf("Size of a long int: %ld byte(s)\n", sizeof(long int));
printf("Size of a long long int: %ld byte(s)\n", sizeof(long long int));
printf("Size of a float: %ld byte(s)\n", sizeof(float));
return (0);
}
