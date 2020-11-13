#include <stdio.h>
int S = 0;

int main()
{
	int c = 0;
	int i;
	for(i = 0; i < 5; i++)
	{
		scanf("%d", &c);
		if(c < 40)
		{
			S += 40;
		}
		else
			S += c;
	}
	printf("%d", S / 5);
	return 0;
}
