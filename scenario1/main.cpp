
#include <stdio.h>

int sum(int a, int b)
{
	return a + b;
}

int minus(int a, int b)
{
	return a - b;
}

int main()
{
	printf("Hello World2\n");
	printf("Hello World %d\n", sum(5, 10));
	printf("Hello World %d\n", minus(5, 10));
	return 0;
}