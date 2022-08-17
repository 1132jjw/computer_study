n, m, k = map(int, input().split())
l = list(map(int, input().split()))
res = 0
max1 = 0
max1_index = -1
max2 = 0
for i in range(len(l)):
	if (l[i] >= max1):
		max1 = l[i]
		max1_index = i
for i in range(len(l)):
	if (l[i] >= max2 and i != max1_index):
		max2 = l[i]
j = 0
for i in range(m):
	if j < k:
		res += max1
		j += 1
	else:
		res += max2
		j = 0
print(res)