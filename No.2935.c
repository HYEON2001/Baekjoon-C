#include <stdio.h>
#include <string.h>

int main()
{
	char a[101];
	char b[101];
	char o;
	char c[101];
	
	int i;
	
	scanf("%s", a);
	getchar();
	scanf("%c", &o);
	getchar();
	scanf("%s", b);
	getchar();
	if(o == '*')
	{
		printf("1");
		for(i = 0; i < strlen(a) + strlen(b) - 2; i++)
			printf("0");
	}
	else
	{
		if(strlen(a) >= strlen(b))
		{
			strcpy(c, a);
			c[strlen(a) - strlen(b)] += 1;
		}
		else
		{
			strcpy(c, b);
			c[strlen(b) - strlen(a)] += 1;
		}
		printf("%s", c);
	}
}
