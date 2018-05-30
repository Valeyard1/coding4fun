#include <stdio.h>
int main(int argc, char const *argv[])
{
	int n,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		printf("%d %d %d\n",i, i*i, i*i*i);
		printf("%d %d %d\n",i, i*i+1, i*i*i+1);
	}
}