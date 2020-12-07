#include <stdio.h>

int main()
{
	int i,j;
	int T;
	int ys = 0, ks = 0;
	int y, k;
	
	scanf("%d", &T);
	
	for(i = 0;i< T;i++){
		
		for(j = 0;j<9;j++){
			
			scanf("%d %d", &y, &k);
			
			ys += y;
			ks += k;
		}
		if(ys > ks){
			printf("Yonsei\n");
		}
		else if(ys < ks){
			printf("Korea\n");
		}
		else if(ks == ys){
			printf("Draw\n");
		}
	}
}
