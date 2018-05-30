#include <stdio.h>
int main(){
	char nome[25];
	double salario_fixo,total,vendas;
	scanf("%s",nome);
	scanf("%lf",&salario_fixo);
	scanf("%lf",&vendas);
	total = salario_fixo + (vendas*0.15);
	printf("TOTAL = R$ %.2lf\n",total);
	return 0;
}