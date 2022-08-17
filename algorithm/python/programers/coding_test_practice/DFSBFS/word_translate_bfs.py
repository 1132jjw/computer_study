import queue

def solution(begin, target, words):
	answer = 0
	return answer

def is_proper_word(src, word):
	difference = 0
	for i in range(len(src)):
		if (src[i] != word[i]):
			difference += 1
	if difference == 1:
		return True
	else:
		return False
