def solution(N, number):
	answer = 0
	if N == 1:
		while number != 0:
			answer += number % 10
			number //= 10
		if answer > 8:
			return -1
		return answer
	d = [0] * 100
	return answer
print(solution(1, 126))
