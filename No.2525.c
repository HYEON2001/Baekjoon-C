#include <stdio.h>
int a, b, T, pt;

int main()
{
	scanf("%d %d", &a, &b);
	scanf("%d", &pt);
	b = b + pt;
	if(b > 59)
	{
		a += b / 60;
		b = b % 60;
	}
	if(a > 23)
	{
		a = a % 24;
	}
	printf("%d %d", a, b);
	return 0;
}
