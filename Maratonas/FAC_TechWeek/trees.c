#include <stdio.h>
#define MAX 50

int main()
{
	int num_mudas = 0, num_dias[MAX], res[MAX];
	int i, a, j, maior = 0;

	scanf("%d", &num_mudas);

	for(i = 1;i <= num_mudas;i++)
		scanf("%d", &num_dias[i]);

	for(i = 1;i <= num_mudas;++i)
		for(j = i + 1;j < num_mudas;++j)
			if(num_dias[i] < num_dias[j])
			{
				a = num_dias[i];
				num_dias[i] = num_dias[j];
				num_dias[j] = a;
			}

	printf("Ordenado: ");
	for(i = 1;i <= num_mudas;i++)
		printf("%d ", num_dias[i]);
	printf("\n");

	for(i = 1;i <= num_mudas;i++)
	{
			res[i] = num_dias[i] + i;
	}

	for(i = 1;i <= num_mudas;i++)
		printf("%d ", res[i]);

	for(i = 1;i <= num_mudas;i++)
		if(res[i] >= maior)
			maior = res[i];

	printf("\nMaior: %d\n", maior);
	return 0;
}
