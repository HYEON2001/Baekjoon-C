#include <stdio.h>
int T;

int gcd(int a, int b)
{
	if(b == 0){
		return a;
	}
	else
		return gcd(b, a % b);
}

int lcm(int a, int b)
{
	return a * b / gcd(a, b);
}

int main()
{
	int i, a, b;
	scanf("%d", &T);
	for(i = 0; i < T; i++)
	{
		scanf("%d %d", &a, &b);
		if(a >= b)
		{
			printf("%d\n", lcm(a, b));
		}
		else
			printf("%d\n", lcm(b, a));
	}
}
