#include <stdio.h>

int main()
{
	float nota1 = 0.0, nota2 = 0.0;
	int op = -1;

	do
	{
		scanf("%f", &nota1);
		if(nota1 < 0.0 || nota1 > 10.0)
		{
			printf("nota invalida\n");
			continue;
		}
		while(1)
		{
			scanf("%f", &nota2);
			if(nota2 < 0.0 || nota2 > 10.0)
			{
				printf("nota invalida\n");
				continue;
			}
			break;
		}
		printf("media = %f\n", (nota1+nota2)/2);
		while(1)
		{
			printf("novo calculo (1-sim 2-nao)\n");
			scanf("%d", &op);
			if(op < 1 || op > 2)
				continue;
			if(op == 1)
				break;
			if(op == 2)
				return 0;
		}
	}while(1);
	return 0;
}
