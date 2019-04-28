import sys
import math

def distancia_pontos(x_1, y_1, x_2, y_2):
    """docstring for distancia_pontos"""
    diff1 = math.pow((x_2 - x_1), 2)
    diff2 = math.pow((y_2 - y_1), 2)

    return math.sqrt(diff1 + diff2)

def main():
    """ a """
    x_1, y_1 = map(float, sys.stdin.readline().split(' '))
    x_2, y_2 = map(float, sys.stdin.readline().split(' '))
    print("{:.4f}" .format(distancia_pontos(x_1, y_1, x_2, y_2)))

if __name__ == "__main__":
    main()
