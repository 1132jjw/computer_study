def print_map(sc, w, h):
	for i in range(h):
		for j in range(w):
			print(sc[i][j], end=' ')
		print()

h, w = map(int, input().split())

sc = []
for i in range(h):
	sc.append([])
	for j in range(w):
		sc[i].append(0)
n = int(input())
for i in range(n):
	l, d, x, y = map(int, input().split())
	x = x - 1
	y = y - 1
	if d == 0:
		for j in range(l):
			if sc[x][y + j] == 0:
				sc[x][y + j] = 1
	elif d == 1:
		for j in range(l):
			if sc[x + j][y] == 0:
				sc[x + j][y] = 1
	else:
		print('error')
print_map(sc, w, h)