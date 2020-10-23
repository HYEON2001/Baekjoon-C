#include <stdio.h>
int a, b;

int main()
{
	scanf("%d %d", &a, &b);
	printf("%.9f\n", (double)a / b);
	return 0;
}
