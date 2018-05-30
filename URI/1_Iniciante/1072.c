#include <stdio.h>
int main(int argc, char const *argv[])
{
	int i,n,in=0,out=0,x;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&x);
		if(x>=10.00&&x<=20.00) in++;
		else out++;
	}
	printf("%d in\n",in);
	printf("%d out\n",out);
	return 0;
}