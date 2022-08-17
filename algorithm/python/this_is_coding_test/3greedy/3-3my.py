n, m = map(int, input().split())
data = []
for _ in range(n):
	data.append(list(map(int, input().split())))
min_in_max = 0
for i in range(n):
	data[i].sort()
for i in range(n):
	if data[i][0] > min_in_max:
		min_in_max = data[i][0]
print(min_in_max)