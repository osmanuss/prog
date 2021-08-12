print('Вводите свой пример')
a, x, b = input().split()
a, b = int(a), int(b)
print(a, x, b, end = ' ')
if x == '+':
    print('=', a + b)
elif x == '-':
    print('=', a - b)
elif x == '*':
    print('=', a * b)
elif x == '/':
    if b == 0:
        print('- делить на ноль нельзя')
    else:
        print('=', a / b)
else:
    print('- это не стандартный пример')
