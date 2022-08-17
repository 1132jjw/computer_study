n, m = map(int, input().split())
a, b, d = map(int, input().split())
cnt = 0
types = [[-1, 0], [0, 1], [1, 0], [0, -1]]
g_map = []
flag = 0
for i in range(n):
	g_map.append(list(map(int, input().split())))
while True:
	for j in range(4):
		t_a = a
		t_b = b
		a += types[(-j + d - 1) % 4][0]
		b += types[(-j + d - 1) % 4][1]
		if (g_map[a][b] == 0):
			g_map[a][b] = 2
			cnt += 1
			d = (-j + d - 1) % 4
			break
		a = t_a
		b = t_b
		if (j == 3):
			flag = 1
	if (flag == 1):
		a -= types[d][0]
		b -= types[d][1]
		flag = 0
		if (g_map[a][b] == 1):
			break
print(cnt)