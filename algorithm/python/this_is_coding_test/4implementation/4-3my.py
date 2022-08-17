pos = input()
co = []
co.append(ord(pos[0]) - ord('a') + 1)
co.append(int(pos[1]))
types = [[1, 2], [1, -2], [-1, 2], [-1, -2], [2, 1], [2, -1], [-2, 1], [-2, -1]]
cnt = 0
for type in types:
	if ((co[0] + type[0] >= 1) and (co[0] + type[0] <= 8)) and ((co[1] + type[1] >= 1) and (co[1] + type[1] <= 8)):
		cnt += 1
print(cnt)