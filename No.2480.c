#include <stdio.h>
int a, b, c;

int max(int a, int b, int c)
{
	return (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
}


int main()
{
	scanf("%d %d %d", &a, &b, &c);
	if(a == b && a == c)
		printf("%d", 10000 + a * 1000);
	else if(a == b || a == c)
		printf("%d", 1000 + a *100);
	else if(b == c)
		printf("%d", 1000 + b * 100);
	else
		printf("%d", 100 * max(a, b, c));
}
