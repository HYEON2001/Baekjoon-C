#include <stdio.h>

int main()
{
	int t, a = 0, b = 0, c = 0;
	
	scanf("%d", &t);
	
	if(t % 10 != 0)
		printf("-1");
	else{
		if(t / 300 >= 1){
			a = t / 300;
			t = t % 300;
		}
		if(t / 60 >= 1){
			b = t / 60;
			t = t % 60;
		}
		c = t / 10;
		printf("%d %d %d", a, b, c);
	}
	return 0;
}
