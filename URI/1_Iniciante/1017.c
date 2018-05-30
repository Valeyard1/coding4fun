#include <stdio.h>
int main(){
	int km,tempo;
	float distancia;
	scanf("%d%d",&tempo,&km);
	distancia = (tempo*km)/12.0;
	printf("%.3f\n",distancia);
	return 0;
}
