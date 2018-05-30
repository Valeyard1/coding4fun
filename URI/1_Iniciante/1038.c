#include <stdio.h>

int main(){
	int cod,qnt;
	scanf("%d%d",&cod,&qnt);
	float result;
	switch(cod){
		case 1: result=4*qnt; break;
		case 2: result=4.5*qnt; break;
		case 3: result=5*qnt; break;
		case 4: result=2*qnt;  break;
		case 5: result=1.5*qnt; break;
	}
	printf("Total: R$ %.2f\n",result);
	return 0;
}
