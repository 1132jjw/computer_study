n, m = map(int, input().split())
array = list(map(int, input().split()))

array.sort()

start = 0
end = array[n - 1]
result = 0
while start <= end:
	mid = (start + end) // 2
	sum = 0
	for i in range(n):
		if array[i] > mid:
			sum += array[i] - mid
	if sum == m:
		result = mid
		break
	elif sum > m:
		result = mid
		start = mid + 1
	else:
		end = mid - 1

print(result)