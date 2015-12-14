import time
initTime = time.time()

def bar(a):  # to decimal
    tmp = 0
    l = len(str(a))-1
    for num in list(str(a)):
        tmp = tmp + int(num)*pow(7, l)
        l = l-1
    return tmp

def foo(num):    # to 7ary
    ans = []

    while num >= 7:
        ans.append(str(num%7))
        num = int(num/7)
    ans.append(str(num))
    ans = ''.join(ans[::-1])
    return ans

ans = {}
for i in range(2000, 1000000):
    ans[i] = foo(i)
print ans
