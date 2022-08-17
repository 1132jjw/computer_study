def make_one(n):
	print("n =", n)
	if n == 0:
		return 1
	while n != 0:
		if n % 5 == 0:
			n /= 5
			return make_one(n) + 1
		elif n % 3 == 0:
			n /= 3
			return make_one(n) + 1
		elif n % 2 == 0:
			n /= 2
			return make_one(n) + 1
		else:
			n -= 1
			return make_one(n) + 1

print(make_one(26))