#include <stdio.h>

int main()
{
	int i;
	int op = 0;

	scanf("%d", &op);

	for(i = 1;i <= op;i++)
	{
		printf("%d %d %d", i, i*i, i*i*i);
		printf("\n");
	}

	return 0;
}
