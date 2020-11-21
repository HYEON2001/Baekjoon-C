#include <stdio.h>
#include <string.h>

char a[51];

int main()
{
	int i, len, p = 10;
	scanf("%s", &a);
	len = strlen(a);
	for(i = 1; i < len; i++){
		if(a[i - 1] == a[i])
			p += 5;
		else if(a[i - 1] != a[i])
			p += 10;
	}
	printf("%d", p);
}
