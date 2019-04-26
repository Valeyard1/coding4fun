import sys

a, b, c = map(int, sys.stdin.readline().split(' '))

maior_a_b = ( a + b + abs(a-b) )//2
maior_cima_c = ( maior_a_b + c + abs(maior_a_b-c) )//2

print("{} eh o maior" .format(maior_cima_c))
