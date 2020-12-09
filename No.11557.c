#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int M = 0;
int m;

struct soju {
	char school[21];
	int c;
};

int main(){
	struct soju arr[20];
	
	int i, T;
	
	scanf("%d", &T);
	
	for(i = 0; i< T; i++){
		int N, j;
	
		scanf("%d", &N);
		
		for(j = 0; j < N; j++){
			scanf("%s %d", arr[j].school, &arr[j].c);
			
			if(M < arr[j].c){
				M = arr[j].c;
				m = j;
			}
		}
		printf("%s", arr[m].school);
		printf("\n");
	}
}
