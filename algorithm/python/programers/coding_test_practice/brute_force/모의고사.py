def solution(answers):
	answer = []
	first_array = [1, 2, 3, 4, 5]
	sec_array = [2, 1, 2, 3, 2, 4, 2, 5]
	thr_array = [3, 3, 1, 1, 2, 2, 4, 4, 5, 5]

	a = 0
	b = 0
	c = 0

	for i in range(len(answers)):
		if answers[i] == first_array[i % 5]:
			a += 1
		if answers[i] == sec_array[i % 8]:
			b += 1
		if answers[i] == thr_array[i % 10]:
			c += 1
	if a >= b and a >= c:
		answer.append(1)
	if b >= a and b >= c:
		answer.append(2)
	if c >= a and c >= b:
		answer.append(3)
	return answer

print(solution([1, 3, 2, 4, 2]))
print(solution([1, 2, 3, 4, 5]))
