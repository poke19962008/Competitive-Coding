vowel = ['a', 'e', 'i', 'o', 'u']
cons = list("bcdfghjklmnpqrstvwxz")

arr = []
def f(string, n, flag):
    if len(string) == n :
        arr.append(string)
    else:
        if flag:
            for x in vowel:
                f(string+x, n, not flag)
        else:
            for x in cons:
                f(string+x, n, not flag)

n = int(raw_input())
f("", n, 1)
f("", n, 0)

arr.sort()
for x in arr:
    print x
