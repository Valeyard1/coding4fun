#include <stdio.h>

int main()
{
	float nota1 = 0.0, nota2 = 0.0;

	while(scanf("%f", &nota1) != EOF)
	{
		if(nota1 < 0.0 || nota1 > 10.0)
			printf("nota invalida\n");
		else
		{
			while(scanf("%f", &nota2) != EOF)
			if(nota2 < 0.0 || nota2 > 10.2)
				printf("nota invalida\n");
			else
			{
				printf("media = %g\n", (nota1+nota2)/2);
				return 1;
			}
		}
	}
}
