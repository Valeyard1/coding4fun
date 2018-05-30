#include <stdio.h>
int main(int argc, char const *argv[])
{
	int valor,v,i;
	int notas[7]={0,0,0,0,0,0,0};
	int cedulas[7]={100,50,20,10,5,2,1};
	scanf("%d",&valor);
	v=valor;
	while(valor>100){
		notas[0]++;
		valor-=100;
	}
	while(valor>50){
		notas[1]++;
		valor-=50;
	}
	while(valor>20){
		notas[2]++;
		valor-=20;
	}
	while(valor>10){
		notas[3]++;
		valor-=10;
	}
	while(valor>5){
		notas[4]++;
		valor-=5;
	}
	while(valor>=2){
		notas[5]++;
		valor-=2;
	}
	while(valor>0){
		notas[6]++;
		valor--;
	}
	printf("%d\n", v);
	for(i=0;i<7;i++)printf("%d nota(s) de R$ %d,00\n",notas[i],cedulas[i]);
	return 0;
}