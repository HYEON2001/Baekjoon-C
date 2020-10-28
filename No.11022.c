#include <stdio.h>
int a, b, sum, T;

int main()
{
	int i;
	scanf("%d", &T);
	for(i = 1;i <= T; i++)
	{
		scanf("%d %d", &a, &b);
		sum = a + b;
		printf("Case #%d: %d + %d = %d\n", i, a, b, sum);
	}
	return 0;
}
