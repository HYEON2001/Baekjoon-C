#include <stdio.h>

int main()
{
	int N, v;
	int c[101];
	int ans = 0;
	scanf("%d", &N);
	
	for(int i = 0;i< N;i++)
	{
		scanf("%d", &c[i]);
	}
	
	scanf("%d", &v);
	
	for(int j = 0;j<N;j++)
	{
		if(c[j] == v)
			ans++;
	}
	printf("%d", ans);
	return 0;
}
