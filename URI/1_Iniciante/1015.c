#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
	//com struct seria melhor
	float x[2],y[2];
	scanf("%f%f%f%f",&x[0],&y[0],&x[1],&y[1]);
	printf("%.4f\n",sqrt((x[1]-x[0])*(x[1]-x[0]) + (y[1]-y[0])*(y[1]-y[0])) );
	return 0;
}