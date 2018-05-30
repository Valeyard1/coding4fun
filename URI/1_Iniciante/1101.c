#include <stdio.h>
int main(int argc, char const *argv[])
{
	int n=1,m=1,i,sum=0;
	while(n>0&&m>0){
		scanf("%d%d",&n,&m);
		if(n<=0||m<=0)break;
		if(n>m){
			for(i=m;i<=n;i++){
				printf("%d ",i);
				sum+=i;
			}
			printf("Sum=%d\n",sum);
			sum=0;
		}
		else{
			for(i=n;i<=m;i++){
				printf("%d ",i);
				sum+=i;
			}
			printf("Sum=%d\n",sum);
			sum=0;
		}
	}
	return 0;
}