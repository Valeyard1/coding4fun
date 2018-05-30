#include <stdio.h>
int main(int argc, char const *argv[])
{
	int entrada[5],i;
	int par=0;
	for(i=0;i<5;i++) scanf("%d",&entrada[i]);
	for(i=0;i<5;i++) if(entrada[i]%2==0)par++;
	printf("%d valores pares\n",par);
	return 0;
}