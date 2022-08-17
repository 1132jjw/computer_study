n = int(input())
array = []
for i in range(n):
	array.append(list(input().split()))
for i in range(n):
	array[i][1] = int(array[i][1])

def setting(data):
	return data[1]

array.sort(key=setting)
for student in array:
	print(student[0], end = " ")
