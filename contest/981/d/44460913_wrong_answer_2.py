N = 55

dp = [[-1 for i in range(N)] for i in range(N)]

# dp[i][k] contains best of (k partitions after i)
def solve(a, i, k):
    if dp[i][k] != -1:
        return dp[i][k]
    if k == 0:
        return sum(a[i:])
    if k  == len(a) - i + 1:
        return 0
    if k == len(a) - i - 1:
        tmp = a[i]
        for j in range(i + 1, len(a)):
            tmp = tmp & a[j]
        dp[i][k] = tmp
        return tmp
    #print(i + 1, len(a) - (k - 1) + 1)
    ans = max([sum(a[i: j]) & solve(a, j, k - 1) for j in range(i + 1, len(a) - (k - 1) + 1)])
    dp[i][k] = ans
    return ans

n, k = map(int, input().split())
a = list(map(int, input().split()))

k -= 1

print(max([sum(a[: i + 1]) & solve(a, i + 1, k - 1) for i in range(n - (k - 1) + 1)]))
