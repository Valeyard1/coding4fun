#include <stdio.h>
#include <stdlib.h>

int main(){
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(b<a && b<c &&c<a)printf("%d\n%d\n%d\n\n",b,c,a);
	else if(b<a && b<c && a<c)printf("%d\n%d\n%d\n\n",b,a,c);
 	else if(c<a && c<b && a<b)printf("%d\n%d\n%d\n\n",c,a,b);
	else if(c<a && c<b && b<a)printf("%d\n%d\n%d\n\n",c,b,a);
	else if(a<b && a<c && b<c)printf("%d\n%d\n%d\n\n",a,b,c);
	else if(a<b && a<c && c<b)printf("%d\n%d\n%d\n\n",a,c,b);
	printf("%d\n%d\n%d\n",a,b,c);
	return 0;
}
