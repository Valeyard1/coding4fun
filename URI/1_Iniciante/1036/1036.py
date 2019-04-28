import sys
import math

a, b, c = map(float, sys.stdin.readline().split(' '))

try:
    delta = (b**2) - (4*a*c)
    delta = math.sqrt(delta)
    x1 = (-b+delta)/(2*a)
    x2 = (-b-delta)/(2*a)
    print("R1 = {:.5f}" .format(x1))
    print("R2 = {:.5f}" .format(x2))
except Exception as e:
    print("Impossivel calcular")
    exit

