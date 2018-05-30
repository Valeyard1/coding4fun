#include <stdio.h>

int main()
{
	int dias = 0, moedas = 0;
	int i, j, k;

	while(scanf("%d", &dias))
	{
		if(dias == 0)
			return 0;

		for(i = 1;i <= dias;i++)
		{
			if(i >= dias)
				break;
			for(j = 0;j < i;j++)
			{
				printf("%d ", i);
				moedas += i;
			}
		}
		printf("\n%d %d\n", dias, moedas);
	}

	return 0;
}
