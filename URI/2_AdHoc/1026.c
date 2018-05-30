#include <stdio.h>
int main(){
	int unsigned long l,m,n;
	while(scanf("%lu %lu",&m,&n)==2){//enquanto os argumentos do scanf forem int
	//ou seja os arg sao os esperados 	
		l=(m^n);
		printf("%lu\n",l);
	}
	return 0;
}