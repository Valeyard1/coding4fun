#include <stdio.h>
int main(int argc, char const *argv[])
{
	float n[6];
	int i,c=0;
	for(i=0;i<6;i++) scanf("%f",&n[i]);
	for(i=0;i<6;i++) if(n[i]>0)c++;
	printf("%d valores positivos\n",c);
	return 0;
}