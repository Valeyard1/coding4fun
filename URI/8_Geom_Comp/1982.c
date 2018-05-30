#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
	typedef struct{
		int x,y;
	}Ponto;

	int n,i,*x,*y, maior_y,maior_x,menor_x,menor_y;
	float distancia=0.0;
	do{
		scanf("%d",&n);
		if(n==0) break;
		 x = (int *) malloc(n*sizeof(int));
		 y = (int *) malloc(n*sizeof(int));

		for(i=0;i<n;i++){
			scanf("%d %d",&x[0],&y[0]);
		}
		maior_x=x[0];
		maior_y=y[0];
		menor_x=x[0];
		menor_y=y[0];
		for(i=0;i<n;i++){
			if(x[i]>maior_x) maior_x = x[i];
			if(x[i]<menor_x) menor_x = x[i];
			if(y[i]>maior_y) maior_y = y[i];
			if(y[i]<menor_y) menor_y = y[i];
		}
		distancia = ((maior_x - menor_x)*2.0)+((maior_y - menor_y)*2.0);
		printf("Tera que comprar uma fita de tamanho %.2f.\n",distancia);
		free(y);
		free(x);
	}while(1);
	return 0;
}