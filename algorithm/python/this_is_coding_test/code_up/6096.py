d = []
d.append([])
for i in range(1, 20):
	l = list(map(int, input().split()))
	l.insert(0, 0)
	d.append(l)
n = int(input())
for i in range(n):
	x, y = map(int, input().split())
	for j in range(1, 20):
		if d[j][y] == 0:
			d[j][y] = 1
		else:
			d[j][y] = 0
		if d[x][j] == 0:
			d[x][j] = 1
		else:
			d[x][j] = 0
for i in range(1, 20):
	for j in range(1, 20):
		print(d[i][j], end=' ')
	print()
