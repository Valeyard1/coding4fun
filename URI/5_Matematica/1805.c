#include <stdio.h>
#include <stdlib.h>

/*
* =================================================
*    Filename:  1805.c
* Description:  Soma dos numeros entre [a,b] (inclusive)
*     Created:  19/04/18 hh:mm
* =================================================
*/

int main(int argc, char **argv)
{
	int a, b;
	int i, soma =0;

	scanf("%d%d", &a, &b);
	for(i = a;i <= b;i++)
		soma += i;
	printf("%d\n", soma);
    return 0;
}

