#include <stdio.h>

int a, b;

int main()
{
	scanf("%d", &a);
	scanf("%d", &b);
	printf("%d\n", a * (b % 10));
	printf("%d\n", a * ((b % 100) / 10));
	printf("%d\n", a * (b / 100));
	printf("%d\n", a * b);
	return 0;
}
