n = int(input())
array = list(map(int, input().split()))
d = [0] * 101
d[0] = array[0]
d[1] = max(array[0], array[1])

for i in range(2, n):
	if array[i] + d[i - 2] > d[i - 1]:
		d[i] = array[i] + d[i - 2]
	else:
		d[i] = d[i - 1]
print(d[n - 1])