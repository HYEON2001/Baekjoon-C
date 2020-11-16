#include <stdio.h>
int a, b;

int main()
{
	while(1)
	{
		scanf("%d %d", &a, &b);
		if(a == 0)
			break;
		else
			if(a > b)
				printf("Yes\n");
			else
				printf("No\n");
	}
}
