#include <stdio.h>

int main(int argc, char const *argv[])
{
	double salario,sub,taxa=0.0;
	scanf("%lf",&salario);
	if(salario<=2000.00){
		printf("Isento\n");
		return 0;
	}
	/*if(salario>=0.00 && salario <=2000.00){
		printf("Isento\n");
		return 0;
	}
	*/
	else if(salario >= 2000.01 && salario <= 3000.00){
		sub = salario*0.08;
		salario=salario - 1000.00;
	}
	else if(salario >= 3000.01 && salario <= 4500.00){
		sub
	}
	else if(salario >= 4500.01){
		printf("%f\n",salario*0.28);
	}
	else {

	}
	
	printf("%.2f\n", taxa);
	
	return 0;
}