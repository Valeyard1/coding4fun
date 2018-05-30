#include <stdio.h>
int main(int argc, char const *argv[])
{
	int x,y,soma=0;
	scanf("%d%d",&x,&y);
	if(x>y){
		for(y=y+1;y<x;y++){
			if(y%2==1||y%2==-1) soma+=y;
		}
	}
	else if(x<y){
		for(x=x+1;x<y;x++){
			if(x%2==1||x%2==-1) soma+=x;
		}
	}
	else{
		printf("%d\n",soma);
		return 0;
	}
	printf("%d\n",soma);
	return 0;
}