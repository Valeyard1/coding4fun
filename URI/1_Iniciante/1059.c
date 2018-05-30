#include <stdio.h>
int main(int argc, char const *argv[])
{
	int i;
	for(i=1;i<101;i++)if(i%2==0)printf("%d\n",i);
	return 0;
}