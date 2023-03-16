#include <stdio.h>
/**
 * main - a C program that prints the size of various types on the computer it is compiled and run on
 * Return: 0 (Success)
 */
int main(void)
{
char c;
int i;
long int c;
long long int d;
float f;
printf("char: %Id\n", sizeof (c));
printf("int: %Id\n", sizeof (i));
printf("long int: %Id\n", sizeof (c));
printf("long long int: %Id\n", sizeof (d));
printf("float: %Id\n", sizeof (f));
return (0);
}
