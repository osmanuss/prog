print('Введите 2 числа')
a = int(input('a = '))
b = int(input('b = '))
c = a
a = b
b = c
print('Произошла замена чисел\na =', a, '\nb =', b)
a = a + b
b = a - b
a = a - b
print('Произошла вторая замена чисел\na =', a, '\nb =', b)