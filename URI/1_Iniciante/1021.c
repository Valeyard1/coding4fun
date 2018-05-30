#include <stdio.h>
int main(int argc, char const *argv[])
{
	float valor,v;
	int i, notas[12]={0,0,0,0,0,0,0,0,0,0,0,0};
	float cedulas[7]={100,50,20,10,5,2,1.0,0.5,0.25,0.1,0.05,0.01};
	scanf("%f",&valor);
	v=valor;
	while(valor>100.00){
		notas[0]++;
		valor-=100.00;
	}
	while(valor>50.00){
		notas[1]++;
		valor-=50.00;
	}
	while(valor>20.00){
		notas[2]++;
		valor-=20.00;
	}
	while(valor>10.00){
		notas[3]++;
		valor-=10.00;
	}
	while(valor>5.00){
		notas[4]++;
		valor-=5.00;
	}
	while(valor>=2.00){
		notas[5]++;
		valor-=2.00;
	}
	while(valor>=1.00){
		notas[6]++;
		valor-=1.00;
	}
	while(valor>=0.5){
		notas[7]++;
		valor-=0.5;
	}
	while(valor>=0.25){
		notas[8]++;
		valor-=0.25;
	}
	while(valor>=0.1){
		notas[9]++;
		valor-=0.1;
	}
	while(valor>=0.05){
		notas[10]++;
		valor-=0.05;
	}

	printf("%f\n", v);
	for(i=0;i<6;i++) printf("%d nota(s) de R$ %.2f\n",notas[i],cedulas[i]);
	for(;i<12;i++) printf("%d moeda(s) de R$ %.2f\n",notas[i],cedulas[i]);
	return 0;
}