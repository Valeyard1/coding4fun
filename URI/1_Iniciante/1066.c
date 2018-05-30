#include <stdio.h>
int main(int argc, char const *argv[])
{
	int entrada[5],i;
	int v[4]={0,0,0,0};
	for(i=0;i<5;i++) scanf("%d",&entrada[i]);
	for(i=0;i<5;i++){
		if(entrada[i]<0) v[0]++;
		if(entrada[i]%2==0)v[1]++;
		if(entrada[i]%2!=0)v[2]++;
		if(entrada[i]>0)v[3]++;
	}
	printf("%d valor(es) par(es)\n",v[1]);
	printf("%d valor(es) impar(es)\n",v[2]);
	printf("%d valor(es) positivo(s)\n",v[3]);
	printf("%d valor(es) negativo(s)\n",v[0]);
	return 0;
}