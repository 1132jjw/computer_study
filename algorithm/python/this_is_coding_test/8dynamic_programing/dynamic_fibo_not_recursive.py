d = [0] * 100

def fibo(x):
	i = 0
	while i < x:
		res = 0
		if i == 0 or i == 1:
			d[i] = 1
			i += 1
			continue
		if d[i] != 0:
			res += d[i]
		else:
			res += d[i - 1] + d[i - 2]
			d[i] = res
		i += 1
	return res

def fibo_sol(x):
	d[0] = 1
	d[1] = 2
	for i in range(2, x):
		d[i] = d[i - 1] + d[i - 2]
fibo_sol(99)
print(d)