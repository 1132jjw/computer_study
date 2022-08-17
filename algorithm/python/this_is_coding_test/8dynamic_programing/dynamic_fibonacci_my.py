array = []
def fibo(num):
	global array
	if num == 1 or num == 0:
		return 1
	if array[num - 1] != 0 and array[num - 2] != 0:
		array[num] = array[num - 1] + array[num - 2] 
		return array[num - 1] + array[num - 2]
	elif array[num - 2] != 0:
		return fibo(num - 1) + array[num - 2]
	else:
		return fibo(num - 1) + fibo(num - 2)
array = [0] * 100
array[0] = 1
array[1] = 1
print(fibo(98))