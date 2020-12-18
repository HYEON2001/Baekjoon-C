#include <stdio.h>

int main()
{
	int N;
	int ans = 1;
	
	scanf("%d", &N);
	
	for(int i = 1;i<=N;i++)
	{
		ans *= i;	
	}
	printf("%d", ans);
}
