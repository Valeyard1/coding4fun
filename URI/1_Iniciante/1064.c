#include <stdio.h>
int main(int argc, char const *argv[])
{
	float entrada[6],media=0.0;
	int p=0,i;
	for(i=0;i<6;i++) scanf("%f",&entrada[i]);
	for(i=0;i<6;i++) {
		if(entrada[i]>=0.000000){
			p++;
			media+=entrada[i];
		}
	}
	printf("%d valores positivos\n",p);
	printf("%.1f\n", media/(float)p);
	return 0;
}