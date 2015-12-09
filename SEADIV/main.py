def conv(a):
    tmp = 0
    l = len(str(a))-1
    for num in list(str(a)):
        tmp = tmp + int(num)*pow(7, l)
        l = l-1
    return tmp

T = input()

while T!=0:
    a = input()
    b = input()
    l = input()

    MOD = pow(7, l)

    a = conv(a)
    b = conv(b)

    num = 0
    if a/b > MOD:
        num = int( (a/b)%MOD )
    else:
        num = int(a/b)

    ans = []
    while num >= 7:
        ans.append(str(num%7))
        num = int(num/7)

    ans.append(str(num))
    ans = ''.join(ans[::-1])

    print ans
    T = T-1
