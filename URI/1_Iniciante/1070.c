#include <stdio.h>
int main(int argc, char const *argv[])
{
	int n,i;
	scanf("%d",&n);
	for(i=n;i<n+12;i++){
		if(i%2!=0) printf("%d\n",i);
	}

	return 0;
}