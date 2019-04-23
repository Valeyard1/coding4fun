#include <stdio.h>

int main()
{
	int gol_inter = 0, gol_gremio = 0;
	int op = -1, partidas = 0;
	int vit_inter = 0, vit_gremio = 0, empates = 0;

	do
	{
		scanf("%d %d", &gol_inter, &gol_gremio);
		partidas++;
		if(gol_inter > gol_gremio)
			vit_inter++;
		else if(gol_gremio > gol_inter)
			vit_gremio++;
		else
			empates++;
		while(1)
		{
			printf("Novo grenal (1-sim 2-nao)\n");
			scanf("%d", &op);
			if(op == 2)
			{
				printf("%d grenais\n", partidas);
				printf("Inter:%d\nGremio:%d\n", vit_inter, vit_gremio);
				printf("Empates:%d\n", empates);
				if(vit_inter > vit_gremio)
					printf("Inter venceu mais\n");
				else if(vit_gremio > vit_inter)
					printf("Gremio venceu mais\n");
				else
					printf("Não houve vencendor\n");
				return 0;
			}
			else
				break;
		}
		
	}while(1);
	return 0;
}
