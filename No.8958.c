#include <stdio.h>
#include <string.h>

int main()
{
	int n, i, j, score, plus;
	char arr[81];
	
	scanf("%d", &n);
	
	for(i = 0;i < n;i++){
		score = 0, plus = 1;
		
		scanf("%s", arr);
		for(j = 0;j < strlen(arr);j++){
			if(arr[j] == 'O'){
				score += plus;
				plus++;
			}
			else
				plus = 1;
		}
		printf("%d\n", score);
	}
	return 0;
}
