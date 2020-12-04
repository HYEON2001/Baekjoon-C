#include <stdio.h>

int main()
{
	int c = 100, s = 100;
	int n, i;
	
	scanf("%d", &n);
	
	for(i = 0; i< n; i++){
		int a, b;
		
		scanf("%d %d", &a, &b);
		
		if(a == b)
			continue;
		else if(a > b)
			s -= a;
		else if(a < b)
			c -= b;
	}
	printf("%d\n", c);
	printf("%d", s);
	return 0;
}
