#include <stdio.h>
int main(int argc, char const *argv[])
{
	int i,j=7;
	for(i=1;i<10;i+=2){
		j=7;
		printf("I=%d J=%d\n",i,j);
		printf("I=%d J=%d\n",i,--j);
		printf("I=%d J=%d\n",i,--j);
	}
	return 0;
}