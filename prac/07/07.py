print('Выберите способ задачи данных треугольника. 1 - длины сторон, 2 - координаты вершин')
x = int(input())

if x == 1:
    print('Введите длины сторон треугольников')
    a = float(input('a = '))
    b = float(input('b = '))
    c = float(input('c = '))

    if a <= 0 or b<=0 or c<=0:
        print('Длины сторон должны быть положительными числами')
    elif a>=(b+c) or b>=(a+c) or c>=(b+a):
        print('Треугольников с такими сторонами не существует')
    else:
        p = (a + b + c)/2
        print('\nS =', (p*(p-a)*(p-b)*(p-c))**0.5)
elif x == 2:
    print('Введите координаты вершин треугольника. По паре чисел через пробел для каждой вершины')
    Ax, Ay = map(float, input('A = ').split())
    Bx, By = map(float, input('B = ').split()) 
    Cx, Cy = map(float, input('C = ').split())

    if (Ax==Bx and Ay==By) or (Bx==Cx and By==Cy) or (Cx==Ax and Cy==Ay):
        print('Вершины треугольника не могут иметь одинаковые координаты')
    else:
        a = ((Ax-Bx)**2 + (Ay-By)**2)**0.5
        b = ((Bx-Cx)**2 + (By-Cy)**2)**0.5
        c = ((Cx-Ax)**2 + (Cy-Ay)**2)**0.5
        p = (a + b + c)/2
        
        print('\nS =', (p*(p-a)*(p-b)*(p-c))**0.5)
