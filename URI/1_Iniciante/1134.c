#include <stdio.h>

int main()
{
	int op = 0, alcool1 = 0, gasolina2 = 0, diesel3 = 0;
	do
	{
		scanf("%d", &op);
		if(op == 1)
			alcool1++;
		else if(op == 2)
			gasolina2++;
		else if(op == 3)
			diesel3++;
		else continue;
	}while(op != 4);
	printf("MUITO OBRIGADO\n");
	printf("Alcool: %d\n", alcool1);
	printf("Gasolina: %d\n", gasolina2);
	printf("Diesel: %d\n", diesel3);
	return 0;
}
