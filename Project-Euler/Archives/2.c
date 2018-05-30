#include <stdio.h>

#define MAX 4000000
int main()
{
	int i, x = 1, y = 1, soma = 0;

	for(i = 1;i <= MAX;i = x + y)
	{
		if(i % 2 == 0)
			soma += i;
		x = y;
		y = i;
	}
	printf("%d", soma);
	return 0;
}
