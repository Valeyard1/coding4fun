seller_name = input()
salary = float(input())
total_sells_in_money = float(input())

comission = 0.15

total = (total_sells_in_money * comission) + salary

print("TOTAL = R$ {0:.2f}" .format(total))

