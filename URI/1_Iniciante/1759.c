#include <stdio.h>
int main(int argc, char const *argv[])
{
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		if(i==n-1)break;
		printf("Ho ");
	}
	printf("Ho!\n");
	return 0;
}