def recursive_function(i):
	if i == 100:
		return
	print('from', i, 'calling', i + 1)
	recursive_function(i + 1)
	print('exit function', i)
recursive_function(0)