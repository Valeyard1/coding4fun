#include <stdio.h>
int main(int argc, char const *argv[])
{
	int x,y,n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d%d",&x,&y);
		if(y!=0)printf("%.1f\n",x/(float)y);
		else printf("divisao impossivel\n");
	}
	return 0;
}