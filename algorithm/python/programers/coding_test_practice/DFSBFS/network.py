def solution(n, computers):
	def dfs(i, j):
		if computers[i][j] == 2 or computers[i][j] == 0:
			return
		computers[i][j] = 2
		for k in range(n):
			dfs(j, k)
	
	result = 0
	for i in range(n):
		for j in range(n):
			if computers[i][j] == 1:
				dfs(i, j)
				result += 1
	answer = result
	return answer

print(solution(3, [[1, 1, 0], [1, 1, 0], [0, 0, 1]]))
print(solution(3, [[1, 1, 0], [1, 1, 1], [0, 1, 1]]))