#include <stdio.h>
int main(int argc, char const *argv[])
{
	int n,i,m;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&m);
		if(m==0){
			printf("NULL\n");
			continue;
		}
		if(m%2==0)printf("EVEN ");
		else printf("ODD ");
		if(m>0) printf("POSITIVE\n");
		else printf("NEGATIVE\n");
	}
	return 0;
}