print('Введите число')
a = int(input())
x = 0
for i in range(2, a):
    if a % i == 0:
        print('Составное')
        x = 1
        break
if x != 1:
    print('Простое')