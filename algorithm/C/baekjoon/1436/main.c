#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	*itoa(int num)
{
	int		len, tmp;
	char	*res;

	len = 0;
	tmp = num;
	while (tmp != 0)
	{
		tmp /= 10;
		len++;
	}
	res = malloc(sizeof(char) * len + 1);
	res[len] = 0;
	while (num != 0)
	{
		res[len - 1] = num % 10 + '0';
		len--;
		num = num / 10;
	}
	return (res);
}

int		main(void)
{
	int N;
	char	*num_str;
	int	order;
	int	num;

	scanf("%d", &N);
	order = 0;
	num = 666;
	while (1)
	{
		num_str = itoa(num);
		if (strstr(num_str, "666"))
			order++;
		if (order == N)
		{
			printf("%d\n", num);
			break ;
		}
		num++;
	}
	return (0);
}