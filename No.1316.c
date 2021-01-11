#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

char word[101] = { 0 };

bool fun();

int main()
{
	int N = 0;
	int c = 0;
	scanf("%d", &N);
	
	for(int i = 0;i<N;i++)
	{
		scanf("%s", &word);
		if(fun())
			c++;
	}
	printf("%d", c);
	getchar();
	getchar();
	return 0;
}

bool fun()
{
	int AL[26] = { 0 };
	AL[word[0] - 97]++;
	for(int i=1; word[i]!='\0';i++)
	{
		if(word[i-1] == word[i])
			continue;
		else if(++AL[word[i] - 97]>1)
			return false;
	}
	return true;
}
