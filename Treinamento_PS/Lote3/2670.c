#include <stdio.h>

int main(int argc, char *argv[])
{
    unsigned int qnt_andar[3], minutos = 0;
    unsigned int i, andar = 0;

    for(i = 0;i < 3;i++) {
        setbuf(stdin,NULL);
        scanf("%d", &qnt_andar[i]);
    }

    unsigned int maior = qnt_andar[0];
    for(i = 0;i < 3;i++) {
        if(qnt_andar[i] > maior) {
            maior = qnt_andar[i];
            andar = i;
        }
    }

    switch(andar)
    {
        case 0:
            minutos = (2*qnt_andar[1]) + (4*qnt_andar[2]);
            break;
        case 1:
            minutos = (2*qnt_andar[0]) + (2*qnt_andar[2]);
            break;
        case 2:
            minutos = (2*qnt_andar[1]) + (4*qnt_andar[0]);
            break;
    }

    printf("%d", minutos);
    return 0;
}

