#include <stdio.h>
int main(int argc, char const *argv[])
{
	int i,n[100],maior=0,posicao=0;
	
	for(i=0;i<100;i++){
		scanf("%d",&n[i]);
		if(n[i]>maior){
			maior=n[i];
			posicao=i+1;
		}
	}
	printf("%d\n%d\n",n[posicao-1],posicao);
	return 0;
}