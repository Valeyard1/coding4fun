#include <stdio.h>
int main(int argc, char const *argv[])
{
	int cod[2],qnt[2];
	float preco[2];
	scanf("%d%d%f%d%d%f",&cod[0],&qnt[0],&preco[0],&cod[1],&qnt[1],&preco[1]);
	printf("VALOR A PAGAR: R$ %.2f\n", (preco[0]*qnt[0])+(preco[1]*qnt[1]));
	return 0;
}