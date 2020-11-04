#include <stdio.h>
int h, m, s, pt;

int main()
{
	scanf("%d %d %d", &h, &m, &s);
	scanf("%d", &pt);
	s = s + pt;
	if(s > 59)
	{
		m = m + s / 60;
		s = s % 60;
	}
	if(m > 59)
	{
		h = h + m / 60;
		m = m % 60;
	}
	if(h > 23)
	{
		h = h % 24;
	}
	printf("%d %d %d", h, m, s);
	return 0;
}
