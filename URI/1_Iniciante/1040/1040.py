import sys

nota_1, nota_2, nota_3, nota_4 = map(float, sys.stdin.readline().split(' '))

media_s = nota_1*2 + nota_2*3 + nota_3*4 + nota_4*1
media = media_s / 10

print("Media: {:.1f}" .format(media))
if media > 7.0:
    print("Aluno aprovado.")
elif media < 5.0:
    print("Aluno reprovado.")
elif media >= 5.0 or media <= 6.9:
    print("Aluno em exame.")
    nota_exame = float(input("Nota do exame: "))
    print(nota_exame)
    media_exame = (media + nota_exame)/2.0
    if media_exame > 5.0:
        print("Aluno aprovado.")
    elif media_exame <= 4.9:
        print("Aluno reprovado.")

    print("Media final: {}" .format(media_exame))

