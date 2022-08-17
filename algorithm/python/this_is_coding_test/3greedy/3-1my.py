def exchange(N, money):
	global coin_cnt
	is_ex = 1
	while is_ex:
		tmp = N
		N -= money
		if N < 0:
			N = tmp
			is_ex = 0
		else:
			coin_cnt += 1
	return N

N = int(input("money: "))
coin_cnt = 0
N = exchange(N, 500)
N = exchange(N, 100)
N = exchange(N, 50)
N = exchange(N, 10)
print(coin_cnt)