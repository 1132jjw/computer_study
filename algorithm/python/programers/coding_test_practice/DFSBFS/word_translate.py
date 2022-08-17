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

target = 'cog'
result = 0
def dfs(word, words, array, cnt):
	global result
	if word == target:
		result = cnt
		return cnt
	for next_word in words:
		if next_word in array:
			continue
		if is_proper_word(word, next_word):
			cnt += 1
			array.append(next_word)
			dfs(next_word, words, array, cnt)
	
cnt = dfs("hit", ["hot", "dot", "dog", "lot", "log", "cog"], ["hit"], 0)
print(result)
cnt = dfs("hit", ["hot", "dot", "dog", "lot", "log"], ["hit"], 0)
print(cnt)