n, m = map(int, input().split())
graph = []
for i in range(n):
	graph.append(list(map(int, input())))

def bfs(i, j, result):
	tmp = []
	result += 1
	if i == n - 1 and j == m - 1:
		return result
	op = [[1, 0], [-1, 0], [0, 1], [0, -1]]
	for k in op:
		if not (i + k[0] <= -1 or i + k[0] >= n or j + k[1] <= -1 or j + k[1] >= n):
			if not graph[i + k[0]][j + k[1]] == 1:
				

result = bfs(0, 0, 0)
print(result)