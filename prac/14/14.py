print('Введите число')
n = int(input())
x = 0
while True:
    if pow(2, x) > n:
        print(x)
        break
    x += 1