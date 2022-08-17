d = [10001] * 100
n, m = map(int, (input().split()))
array = []
for i in range(n):
	array.append(int(input()))
	d[n] = 1
array.sort()
for i in range(array[0] + 1, m):
	for j in array:
		if d[i - j] != 10001:
			d[i] = min(d[i], d[i - j] + 1)
if d[m - 1] == 10001:
	print(-1)
else:
	print(d[m - 1])