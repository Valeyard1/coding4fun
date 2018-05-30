#include <stdio.h>
int main(){
	int funcionario,horas_trabalhadas;
	float salario,valor_hora;
	scanf("%d",&funcionario);
	scanf("%d",&horas_trabalhadas);
	scanf("%f",&valor_hora);
	salario = valor_hora*horas_trabalhadas;
	printf("NUMBER = %d\n",funcionario);
	printf("SALARY = U$ %.2f\n",salario);
	return 0;
}