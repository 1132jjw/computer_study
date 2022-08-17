l = list(map(int, input().split()))

for i in range(len(l)):
	min_index = i
	for j in range(i + 1, len(l)):
		if l[min_index] > l[j]:
			min_index = j
	l[min_index], l[i] = l[i], l[min_index]
print(l)
