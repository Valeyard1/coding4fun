#include <stdio.h>

int main(int argc, char *argv[]) {
    float nota1, nota2, nota3, nota4;
    float media, media_final;
    float nota_exame;

    scanf("%f %f %f %f", &nota1, &nota2, &nota3, &nota4);
    media = (nota1*2 + nota2*3 + nota3*4 + nota4*1)/10;

    printf("Media: %.1f\n", media);

    if (media >= 7.0) {
        printf("Aluno aprovado.\n");
    } else if (media < 5.0) {
        printf("Aluno reprovado.\n");
    } else if (media >= 5.0 || media <= 6.9) {
        printf("Aluno em exame.\n");
        printf("Nota do exame: ");
        scanf("%f", &nota_exame);
        printf("%.1f\n", nota_exame);

        media_final = (media + nota_exame)/2.0;
        if (media_final >= 5.0) {
            printf("Aluno aprovado.\n");
        } else if (media_final <= 4.9) {
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1f\n", media_final);
    }
    return 0;
}
