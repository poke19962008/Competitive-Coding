def bar(a):
    tmp = 0
    l = len(str(a))-1
    for num in list(str(a)):
        tmp = tmp + int(num)*pow(7, l)
        l = l-1
    return tmp

def foo(num):
    ans = []

    while num >= 7:
        ans.append(str(num%7))
        num = int(num/7)
    ans.append(str(num))
    if num == 0:
        print num
    ans = ''.join(ans[::-1])
    return ans

for i in range(100):
    print str(i) + " : " + str(foo(i))


# print bar(10)

# print str(1000000) + " : " + str(foo(1000000))
