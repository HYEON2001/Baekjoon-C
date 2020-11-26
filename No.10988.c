#include <stdio.h>
#include <string.h>

int len, i;
char a[101];
int ans = 1;

int main()
{
	scanf("%s", a);
	len = strlen(a);
	
	for(i = 0; i < (len / 2);i++){
		if(a[i] != a[len - i - 1])
			ans=0;
	}
	if(ans == 0)
		printf("0\n");
	else
		printf("1\n");
	
	return 0;
}
