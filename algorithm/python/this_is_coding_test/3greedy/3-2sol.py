n, m, k = map(int, input().split())
l = list(map(int, input().split()))
l.sort()
first = l[n - 1]
second = l[n - 2]

res = (m // (k + 1)) * (first * k + second) + (m % (k + 1)) * first
print(res)