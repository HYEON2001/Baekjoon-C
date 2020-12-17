#include <stdio.h>

int main()
{
	int p;
	int book = 0;
	int c;
	
	scanf("%d", &p);
	
	for(int i = 0; i< 9; i++)
	{
		scanf("%d", &c);
		book += c;	
	}
	printf("%d", p - book);
	return 0;
}
