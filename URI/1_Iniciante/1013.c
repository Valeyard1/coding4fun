#include <stdio.h>
int main(int argc, char const *argv[])
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	printf("%d eh o maior\n",a>b&&a>c?a:b>a&&b>c?b:c);
	return 0;
}