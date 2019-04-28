valor_em_reais = int(input())

def possiveis_cedulas(valor_em_reais):
    print("{} nota(s) de R$ 100,00" .format(valor_em_reais//100))
    valor_em_reais %= 100
    print("{} nota(s) de R$ 50,00" .format(valor_em_reais//50))
    valor_em_reais %= 50
    print("{} nota(s) de R$ 20,00" .format(valor_em_reais//20))
    valor_em_reais %= 20
    print("{} nota(s) de R$ 10,00" .format(valor_em_reais//10))
    valor_em_reais %= 10
    print("{} nota(s) de R$ 5,00" .format(valor_em_reais//5))
    valor_em_reais %= 5
    print("{} nota(s) de R$ 2,00" .format(valor_em_reais//2))
    valor_em_reais %= 2
    print("{} nota(s) de R$ 1,00" .format(valor_em_reais//1))

def main():
    print(valor_em_reais)
    possiveis_cedulas(valor_em_reais)

if __name__ == "__main__":
    main()
