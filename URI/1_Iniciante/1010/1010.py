import sys

# SIM É GAMBIARRA
# NÃO SEI FAZER MELHOR GHRRRRR

code_piece1, piece_number1, single_piece_value1 = map(str,sys.stdin.readline().split(' '))
code_piece1 = int(code_piece1)
piece_number1 = int(piece_number1)
single_piece_value1 = float(single_piece_value1)

code_piece2, piece_number2, single_piece_value2 = map(str,sys.stdin.readline().split(' '))
code_piece2 = int(code_piece2)
piece_number2 = int(piece_number2)
single_piece_value2 = float(single_piece_value2)

total_piece1 = piece_number1 * single_piece_value1
total_piece2 = piece_number2 * single_piece_value2

total = total_piece1 + total_piece2

print("VALOR A PAGAR: R$ {0:.2f}" .format(total))

