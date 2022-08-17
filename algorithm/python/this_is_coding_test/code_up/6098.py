def print_d(d):
	for i in range(10):
		for j in range(10):
			print(d[i][j], end=' ')
		print()
d = []
for i in range(10):
	l = list(map(int, input().split()))
	d.append(l)
ant_co = [1, 1]
end_plag = 0
while end_plag == 0:
	d[ant_co[1]][ant_co[0]] = 9
	if d[ant_co[1]][ant_co[0] + 1] == 0:
		ant_co[0] += 1
	elif d[ant_co[1]][ant_co[0] + 1] == 1:
		if d[ant_co[1] + 1][ant_co[0]] == 0:
			ant_co[1] += 1
		elif d[ant_co[1] + 1][ant_co[0]] == 1:
			end_plag = 1
		else:
			ant_co[1] += 1
			end_plag = 1
	else:
		ant_co[0] += 1
		end_plag = 1
d[ant_co[1]][ant_co[0]] = 9
print_d(d)