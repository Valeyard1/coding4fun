#include <stdio.h>
int main(int argc, char const *argv[])
{
	int n,m;
	scanf("%d%d",&n,&m);
	if(n%m==0) {
		printf("Sao Multiplos\n");
		return 0;
	}
	else if(m%n==0)printf("Sao Multiplos\n");
	else printf("Nao sao Multiplos\n");
	return 0;
}