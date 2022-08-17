from bisect import bisect


n = int(input())
array = list(map(int, input().split()))
m = int(input())
target_array = list(map(int, input().split()))

array.sort()

def bi_search(array, target, start, end):
	if start > end:
		return False
	mid = (start + end) // 2
	if array[mid] == target:
		return True
	elif array[mid] > target:
		return bi_search(array, target, start, mid - 1)
	else:
		return bi_search(array, target, mid + 1, end)

for i in range(m):
	if bi_search(array, target_array[i], 0, n - 1):
		print("yes", end=' ')
	else:
		print("no", end=' ')
