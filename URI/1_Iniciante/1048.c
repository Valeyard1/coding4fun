#include <stdio.h>
int main(int argc, char const *argv[])
{
	double salario,ajustado=0.00;
	int p=0;
	scanf("%lf",&salario);
	if(salario>=0.00&&salario<=400.00){
		ajustado = salario+(salario*0.15);
		p=15;
	}
	else if(salario>=400.01&&salario<=800.00){
		ajustado = salario+(salario*0.12);
		p=12;
	}
	else if(salario>=800.01&&salario<=1200.00){
		ajustado = salario+(salario*0.10);
		p=10;
	}
	else if(salario>=1200.01&&salario<=2000.00){
		ajustado = salario+(salario*0.07);
		p=7;
	}
	else if(salario>=2000.01){
		ajustado = salario+(salario*0.04);
		p=4;
	} 
	printf("Novo salario: %.2f\n",ajustado);
	printf("Reajuste ganho: %.2f\n",ajustado-salario);
	printf("Em percentual: %d %%\n",p);
	return 0;
}