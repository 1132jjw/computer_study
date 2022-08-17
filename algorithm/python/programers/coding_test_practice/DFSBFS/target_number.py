def solution(numbers, target):
	array = numbers
	global answer
	answer = 0

	def dfs(array, i, sum):
		global answer
		if i == len(array):
			if sum == target:
				answer += 1
				return
			else:
				return
		dfs(array, i + 1, sum + array[i])
		dfs(array, i + 1, sum - array[i])

	dfs(array, 0, 0)
	return answer
