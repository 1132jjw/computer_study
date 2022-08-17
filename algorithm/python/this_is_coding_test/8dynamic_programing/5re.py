n, m = map(int, input().split())
array = []
d = [10001] * 10001
for i in range(n):
	array.append(int(input()))
	d[array[i]] = 1

for money in array:
	for i in range(m + 1):
		if i > money:
			if d[i] > d[i - money] + 1:
				d[i] = d[i - money] + 1

if d[m] == 10001:
	print(-1)
else:
	print(d[m])
print(d[0:20])