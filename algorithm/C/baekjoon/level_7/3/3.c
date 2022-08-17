#include <stdio.h>

int		is_num(int nb)
{
	int		arr[4];
	int		i;

	i = 0;
	if (nb == 1000)
		return (0);
	if (nb > 0 && nb < 100)
		return (1);
	while (nb)
	{
		arr[i] = nb % 10;
		nb /= 10;
		i++;
	}
	if (arr[0] - arr[1] == arr[1] - arr[2])
		return (1);
	return (0);
}

int		main(void)
{
	int		range;
	int		cnt;

	cnt = 0;
	scanf("%d", &range);
	for (int i = 0; i <= range; i++)
	{
		if (is_num(i))
			cnt++;
	}
	printf("%d\n", cnt);
	return (0);
}