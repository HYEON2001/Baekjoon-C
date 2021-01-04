#include <stdio.h>

int list[1001];

int main()
{
	int i, j, tmp, n;
	
	scanf("%d", &n);
	
	for(i = 0; i<n; i++){
		scanf("%d", &list[i]);
	}
	
	for(i = 0; i<n;i++){
		for(j=0;j<n-1-i;j++){
			if(list[j]>list[j+1]){
				tmp = list[j];
				list[j] = list[j+1];
				list[j+1] = tmp;
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%d\n", list[i]);
	}
	return 0;
}
