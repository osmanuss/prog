print('Вводите данные')
s, l1, r1, l2, r2 = map(int, input().split())
if (l1 + l2 <= s) and (r1 + r2 >= s):
    if l1 + r2 == s:
        print(l1, r2)
    elif l1 + r2 > s:
        print(l1, s - l1)
    else:
        print(s - r2, r2)
else:
    print(-1)