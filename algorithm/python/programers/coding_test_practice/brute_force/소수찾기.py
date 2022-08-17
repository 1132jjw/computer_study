from locale import atoi


def is_prime(number):
	if number <= 1:
		return False
	if number == 2:
		return True
	for i in range(2, int(number**(1/2)) + 1):
		if number % i == 0:
			return False
	return True


def solution(numbers):
	answer = 0
	print(int("12413"))
	return answer