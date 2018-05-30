#include <stdio.h>
int main(int argc, char const *argv[])
{
	double n;
	scanf("%lf",&n);
	if(n>0.00000000000000)printf("+%.4E\n",n);
	else printf("%.4E\n",n);
	return 0;
}