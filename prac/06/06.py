print('Введите значения переменных')
a = float(input('a = '))
b = float(input('b = '))
c = float(input('c = '))
print(a, '*x^2 + ', b, '*x + ', c, ' = 0', sep = '')
if a == 0:
    if b == 0:
        if c == 0:
            print('Корнем уравнения является любое число')
        else:
            print('Данное уравнение не имеет корней')
    else:
        print('x = ', (-c/b))
else:
    d = (b**2 - 4*a*c)
    if d > 0:
        print('x1 =', (-b + (d ** 0.5))/(2*a), '\nx2 =', (-b - (d ** 0.5))/(2*a))
    elif d == 0:
        print('x =', -b/(2*a))
    else:
        print('Данное уравнение не имеет корней')