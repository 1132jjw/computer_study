#include <stdio.h>
#include <stdlib.h>
#include <time.h>

# define MAX 500

int	call_num;

void	print_sum(int sum[], char *msg)
{
	int	pos;

	printf("%s", msg);
	while (sum[pos] != -1)
		pos++;
	while (--pos >= 0)
		printf("%d", sum[pos]);
	printf("\n");
}

unsigned long long	recur_func(int n, int sum[])
{
	call_num++;
	if (n == 1)
		return (1);
	else
		return (recur_func(n - 1, sum) * n);
}

void	factorial_recur(int n, int sum[])
{
	clock_t	start = 0, finish = 0;
	double	duration = 0.0;

	sum[0] = 1;
	call_num = 0;
	start = clock();
	recur_func(n, sum);
	print_sum(sum, "\nResult of Recursion: ");
	finish = clock();
	duration = (double)(finish - start) / CLOCKS_PER_SEC;
	printf("%f초 입니다.\n", duration);
	printf("함수 호출횟수: %d회입니다.\n\n", call_num);
}

void	factorial_iter(int n, int sum[])
{
	clock_t	start = 0, finish = 0;
	double	duration = 0.0;
	int		i, j;
	int		mul = 0, radix = 0, mod = 0;

	start = clock();
	i = 0;
	for (i = 2; i <= n; i++) // n!
	{
		mul = 0;
		radix = 0;
		mod = 0;
		for (j = 0; sum[j] != -1; j++) // 매 자릿수에 i를 곱한 후, radix를 더한다, radix 새로 할당
		{
			mul = sum[j] * i;
			mod = mul % 10;
			sum[j] = mod + radix;
			radix = (mul / 10) + (sum[j] / 10);
		}
		while (radix != 0)
		{
			sum[j] = radix % 10;
			radix = radix / 10;
			j++;
		}
	}
	print_sum(sum, "Result of Iteration: ");
	finish = clock();
	duration = (double)(finish - start) / CLOCKS_PER_SEC;
	printf("%f초 입니다.\n", duration);
	printf("문장 실행횟수: %d회입니다.\n", n);
}

void	get_num(int *n, int sum[])
{
	sum[0] = 1;
	for (int i = 1; i < 500; i++)
		sum[i] = -1;
	*n = 0;
	printf("Enter Num: ");
	scanf("%d", n);
}

int main(void)
{
	int	n = 0;
	int	sum[MAX];

	while (1)
	{
		get_num(&n, sum);
		if (n <= 0)
		{
			printf("Invalid Num: %d\n", n);
			break ;
		}
		factorial_iter(n, sum);
		unsigned long long s = 1;
		for (int i = 2; i <= n; i++)
			s *= i;
		printf("s::::::::::::::::: %llu\n", s);
		// factorial_recur(n, sum);
	}
	return (0);
}