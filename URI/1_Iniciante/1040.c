#include <stdio.h>
int main(int argc, char const *argv[])
{
	double n[5],media;
	int i;
	for(i=0;i<4;i++){
		scanf("%lf",&n[i]);
	}
	media = (2*n[0]+3*n[1]+4*n[2]+n[3])/10.0;
	printf("Media: %.1lf\n",media);
	if(media >= 7.0) printf("Aluno aprovado.\n");
	else if(media < 5.0) printf("Aluno reprovado.\n");
	else{
		printf("Aluno em exame.\n");
		scanf("%lf",&n[4]);
		printf("Nota do exame: %.1lf\n",n[4]);
		if((media+n[4])/2.0 >= 5.0) printf("Aluno aprovado.\n");
		else printf("Aluno reprovado.\n");
		printf("Media final: %.1lf\n",(media+n[4])/2.0);
	}
	return 0;
}