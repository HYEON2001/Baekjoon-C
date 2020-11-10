#include <stdio.h>
int N, i;

int main()
{
	i = 2;
	scanf("%d", &N);
	while(1)
	{
		if(N % i == 0)
		{	
			N /= i;
			printf("%d\n", i);
		}
		else
			i++;
		if(N < i)
			break;
	}
}
