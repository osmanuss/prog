from random import randint

while (1):
    b = int(input('Игра началась. Угадайте число от 1 до 100\n'))
    a = randint(1, 100)
    for i in range(5):
        if (a > b) and (i < 4):
            b = int(input('Загаданное число больше\n'))
        elif (a < b) and (i < 4):
            b = int(input('Загаданное число меньше\n'))
        else:
            break
    if a == b:
        print('Поздравляю! Вы угадали')
    else:
        print('Вы проиграли. Было загадано:', a)
    x = int(input('Хотите начать сначала? (1 - ДА )'))
    if x != 1:
        break