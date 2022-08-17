n = int(input())
l = list(input().split())
p = [1, 1]
for i in range(len(l)):
	if l[i] == 'L':
		if (p[1] - 1 >= 1):
			p[1] -= 1
	elif l[i] == 'R':
		if (p[1] + 1 <= n):
			p[1] += 1
	elif l[i] == 'U':
		if (p[0] - 1 >= 1):
			p[0] -= 1
	elif l[i] == 'D':
		if (p[0] + 1 <= n):
			p[0] += 1
print(p)