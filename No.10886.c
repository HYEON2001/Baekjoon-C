#include <stdio.h>

int main()
{
	int N, i;
	int nc = 0;
	int c = 0;
	int cnt;
	
	scanf("%d", &N);
	for(i = 0;i < N; i++){
		scanf("%d", &cnt);
		if(cnt == 1)
			c++;
		else if(cnt == 0)
			nc++;	
	}
	if(c > nc)
		printf("Junhee is cute!");
	else
		printf("Junhee is not cute!");
	
	return 0;
}
