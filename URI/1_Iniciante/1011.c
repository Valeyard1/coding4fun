#include <stdio.h>
#define PI 3.14159

int main(int argc, char const *argv[])
{
	double raio;
	scanf("%lf",&raio);
	printf("VOLUME = %.3lf\n",(4/3.0)*PI*raio*raio*raio);
	return 0;
}