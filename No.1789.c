#include <stdio.h>
long long N;

int maximum()
{
	long long sum, i;
	int ans = 0;
	
	sum = 0;
	i = 1;
	while(1)
	{
		sum += i;
		ans++;
		if(sum > N)
		{
			ans--;
			break;
		}
		i++;
	}
	printf("%lld", ans);
}
 


int main()
{
	scanf("%lld", &N);
	maximum();
	return 0;	
}

