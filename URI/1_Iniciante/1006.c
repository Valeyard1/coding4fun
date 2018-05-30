#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
	double A,B,C,MEDIA;
	scanf("%lf%lf%lf",&A,&B,&C);
	MEDIA=(A*2.0+B*3.0+C*5.0)/10;
	printf("MEDIA = %.1lf\n",MEDIA);
	return 0;
}