#include <stdio.h>
int max2(int x, int y, int z);
int a, b, c;

int main()
{
	scanf("%d %d %d", &a, &b, &c);
	printf("%d", max2(a, b, c));
	return 0;
}

int max2(int x, int y, int z)
{
	if(x > y)
	{
		if(x > z)
		{
			if(y > z)
			{
				return y;
			}
			else
				return z;
		}
		else
			return x;
	}
	else
	{
		if(y > z)
		{
			if(x > z)
				return x;
			else
				return z;
		}
		else
			return y;
	}
}
