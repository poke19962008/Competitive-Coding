T = input()

while(T != 0):
    N = input()

    dp = {}
    slopeZero = []

    while N != 0:
        a, b, c = raw_input().split()

        a = float(a)
        b = float(b)
        c = float(c)

        if b == 0:
            slope = "INF"
            inter = float((c*1.0)/a)
        else:
            slope = float((a*1.0)/b)
            inter = float((c*1.0)/b)

        if not dp.has_key(slope):
            dp[slope] = {}
            dp[slope]['inter'] = {}

            dp[slope]['freq'] = 1
            dp[slope]['inter'][inter] = 1
        else:
            if dp[slope]['inter'].has_key(inter):
                dp[slope]['inter'][inter] = dp[slope]['inter'][inter] +1
            else:
                dp[slope]['inter'][inter] = 1
                dp[slope]['freq'] = dp[slope]['freq'] + 1
        N = N-1

    ans = 0
    # print dp
    for slope in dp:
        ans = max(ans, dp[slope]['freq'])

    print ans
    T = T-1
