print('Вводите свои данные через строку')
a = float(input('a = '))
b = int(input('b = '))
x = 1
if b==0:
    print(1)
else:
    for i in range(abs(b)):
        x = x * a
    if b > 0:
        print(x)
    else:
        print('1/', x, sep = '')