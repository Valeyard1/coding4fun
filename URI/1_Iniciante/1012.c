#include <stdio.h>
#define PI 3.14159

int main(int argc, char const *argv[])
{
	double A,B,C;
	scanf("%lf%lf%lf",&A,&B,&C);
	printf("TRIANGULO: %.3lf\n",(A*C)/2);
	printf("CIRCULO: %.3lf\n", PI*C*C);
	printf("TRAPEZIO: %.3lf\n", ((A+B)*C)/2 );
	printf("QUADRADO: %.3lf\n",(B*2*B*2)/4 );
	printf("RETANGULO: %.3lf\n",(B*2*A*2)/4 );
	return 0;
}