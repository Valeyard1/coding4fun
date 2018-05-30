#include <stdio.h>
#include <stdlib.h>

/*
* =================================================
*    Filename:  1161.c
* Description:  Soma dois fatoriais a e b
*     Created:  19/04/18 hh:mm
* =================================================
*/
long long int fatorial(long long numero)
{
	int i;
	long long int fat = 1;

	if(numero == 0)
		return 1;
	for(i = 1;i <= numero;i++)
		fat *= i;
	return fat;
}

int main(int argc, char **argv)
{
	long long int M, N;

	while(scanf("%lld%lld", &M, &N) != EOF)
	{
		printf("%lld\n", fatorial(M) + fatorial(N));
	}
    return 0;
}

