#include <stdio.h>
int ano_bissexto(int ano){
	if((ano%4==0 && ano%100!=0)||ano%400==0) return 1;
	return 0;
}
int huluculu(int ano){
	if(ano%15==0) return 1;
	return 0;
}
int bulukulu(int ano){
	if(ano_bissexto(ano)&&ano%55==0) return 1;
	return 0;
}
int main(){
	int ano;
	while(scanf("%d",&ano)){
		if(ano_bissexto(ano)){
			printf("This is leap year.\n");
			if(huluculu(ano)) printf("This is huluculu festival year.\n");
			if(bulukulu(ano)) printf("This is bulukulu festival year.\n");
		}
		else if(!ano_bissexto(ano)&&!bulukulu(ano)&&!huluculu(ano))
			printf("This is an ordinary year.\n");
		else if(huluculu(ano)) printf("This is huluculu festival year.\n");
		else if(bulukulu(ano)) printf("This is bulukulu festival year.\n");
		setbuf(stdin,NULL);
	}
	return 0;
}