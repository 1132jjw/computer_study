def ice_dfs(i, j, ice_map):
	if i <= -1 or i >= n or j <= -1 or j >= m:
		return
	if ice_map[i][j] == '1' or is_visited[i][j] == True:
		return
	is_visited[i][j] = True
	for k in op:
		ice_dfs(i + k[0], j + k[1], ice_map)

global op; op = [[1, 0], [0, 1], [-1, 0], [0, -1]]
n, m = map(int, input().split())
ice_map = []
global is_visited; 
is_visited = []
cnt = 0
for i in range(n):
	ice_map.append(input())
for i in range(n):
	is_visited.append([False] * m)
for i in range(n):
	for j in range(m):
		if ice_map[i][j] == '0' and is_visited[i][j] == False:
			ice_dfs(i, j, ice_map)
			cnt += 1

print(cnt)