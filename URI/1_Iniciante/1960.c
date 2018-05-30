#include <stdio.h>
int main(int argc, char const *argv[])
{
	int n,j=0;
	scanf("%d",&n);
	char str[4];
	str[0] = &n;
	str[4] = 0;
	char aux[4];

	for(int i=0;i<4;i++){
		if(isdigit(str[i])){
			aux[j++]=str[i];
		}
	}
	aux[j]=0;
	printf("%s\n",aux);

	/*
	if(n>=100 && n <= 199)
	if(n>=200 && n <= 299)
	if(n>=300 && n <= 399)
	if(n>=400 && n <= 499)
	if(n>=500 && n <= 599)
	if(n>=600 && n <= 699)
	if(n>=700 && n <= 799)
	if(n>=800 && n <= 899)
	if(n>=900 && n <= 999)
	*/
	return 0;
}