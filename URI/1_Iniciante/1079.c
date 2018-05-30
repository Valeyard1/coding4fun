#include <stdio.h>
int main(int argc, char const *argv[])
{
	int n,i,j;
	float valor[3];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<3;j++){
			scanf("%f",&valor[j]);
		}
		printf("%.1f\n", (valor[0]*2+valor[1]*3+valor[2]*5)/10.0);
	}

	return 0;
}