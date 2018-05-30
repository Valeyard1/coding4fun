#include <stdio.h>

int main()
{
	int largura, comprimento;
	int tipo1 = 0, tipo2 = 0;
	int i;

	scanf("%d %d", &largura, &comprimento);
	if(largura < 1 || largura > 100 || comprimento < 1 || comprimento > 100)
		return 0;

	tipo1 = (largura*comprimento) + (largura-1) * (comprimento-1);
	tipo2 = ((comprimento-1) * 2) + ((largura-1) * 2);
	printf("%d \n%d\n", tipo1, tipo2);
	return 0;
}
