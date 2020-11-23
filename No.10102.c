#include <stdio.h>
#include <string.h>

int v;

int main()
{
	int a = 0;
	int b = 0;
	int i, length;
	char l[20] = " ";
	
	scanf("%d", &v);
	scanf("%s", l);
	
	length = strlen(l);
	
	for(i = 0; i < length; i++){
		if(l[i] == 'A')
			a++;
		else if(l[i] == 'B')
			b++;
	}
	if(a > b)
		printf("A");
	else if(a < b)
		printf("B");
	else
		printf("Tie");
}

