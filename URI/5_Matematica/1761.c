#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.141592654

/*
* =================================================
*    Filename:  1761.c
* Description:  Decoração Natalina
*     Created:  20/04/18 hh:mm
* =================================================
*/

int main(int argc, char **argv)
{
	double angulo = 0, distancia = 0, altura_elfo = 0, altura = 0, quantidade = 1;

	while(scanf("%lf%lf%lf", &angulo, &distancia, &altura_elfo) != EOF)
	{
		if((angulo < 1.00 || angulo > 90.00) || (altura_elfo <= 0.5 ||
					altura_elfo >= 1.50) || (distancia <= 1.00 || distancia >= 100.00))
		{
			printf("Erro na entrada!");
			exit(-1);
		}
		altura = 0;
		angulo = (PI/180) * angulo;
		altura = tan(angulo) * distancia;
		altura += altura_elfo;
		quantidade = altura * 5;
		printf("%.2lf\n", quantidade);
	}
    return 0;
}

