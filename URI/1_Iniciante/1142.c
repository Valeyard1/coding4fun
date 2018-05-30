#include <stdio.h>
int main(){
	int n,i,j=1,k;
	scanf("%d",&n);
	for(i=0,k=0;k<n;i+=3,k++){
		for(j=1;j<=3;j++){
			printf("%d ",j+i);
		}
		printf("PUM\n");
		i++;
	}
	return 0;
}