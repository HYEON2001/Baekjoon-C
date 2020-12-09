#include <stdio.h>

int main(){
	int M, i, N, ans = 0;
	int min = 10000;
	
	scanf("%d %d", &M, &N);
	
	for(i = 1;i*i<=N;i++){
		if(i*i >= M && i*i <= N){
			ans += i*i;
			if(i *i < min)
				min = i * i;
		}
	}
	if(ans != 0)
		printf("%d\n%d", ans, min);
	else
		printf("-1");
}
