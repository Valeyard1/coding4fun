#include <stdio.h>
int main(int argc, char const *argv[])
{
	float n;
	scanf("%f",&n);
	if(n<0|| n>100.00) {
		printf("Fora de intervalo\n"); 
		return 0;
	}
	else printf("Intervalo ");
	if(n>=25.01 && n<= 50.00) printf("(25,50]\n");
	else if(n<=25.00) printf("[0,25]\n");
	else if(n>=50.01 && n<= 75.00) printf("(50,75]\n");
	else if(n>=75.01 && n<= 100.00) printf("(75,100]\n");
	return 0;
}