x = 5

##1
print(x or x*x)

##2
print(x and x*x)

##3
if (x or 0):
    print (x)
else:
    print(0)

##4
x != 5 or print(11, end = '')
print(x)

##5
x != 5 and print(11, end = '')
print(x)