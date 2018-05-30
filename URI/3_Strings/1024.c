#include <stdio.h>
#include <string.h>
#include <stdio_ext.h>

int main(){
int n,i;
char cadeia[1000];
scanf("%d",&n);
for(i=0;i<n;i++){
	__fpurge(stdin);
	scanf("%999[^\n]s",cadeia);
	int j,tam = strlen(cadeia);
	for(j=0;j<tam;j++){
		if((cadeia[j]>='a' && cadeia[j] <='z')||(cadeia[j]>='A' && cadeia[j] <='Z')) cadeia[j]+=3;
	}
	char inversa[tam+1];
	inversa[tam]=0;
	int k=tam-1;
	for(j=0;j<tam;j++) inversa[k--] = cadeia[j];
	for(j=tam/2;j<tam;j++) inversa[j]-=1;
	printf("%s\n",inversa);
}	
	return 0;
}
