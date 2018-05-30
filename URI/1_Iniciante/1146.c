#include <stdio.h>

int main()
{
	int op = -1, i;

	while(1)
	{
		scanf("%d", &op);
		if(op == 0)
			return 0;
		for(i = 1;i <= op;i++)
		{
			printf("%d", i);
			if(i != op)
				printf(" ");
		}
		printf("\n");
	}
}
