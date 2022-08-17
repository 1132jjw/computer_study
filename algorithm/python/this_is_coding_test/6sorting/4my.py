n, k = map(int, input().split())
a = list(map(int, input().split()))
b = list(map(int, input().split()))

a.sort()
b.sort(reverse=True)
j = 0
for i in range(k):
	if a[i] >= b[j]:
		break
	else:
		a[i], b[j] = b[j], a[i]
		j += 1
sum = 0
for i in range(n):
	sum += a[i]
print(sum)