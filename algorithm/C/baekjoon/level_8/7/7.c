#include <stdio.h>

int		main(void)
{
	int a, b, i, j;
	int a_arr[3], b_arr[3];

	i = 0;
	j = 0;
	scanf("%d %d", &a, &b);
	while (a)
	{
		a_arr[i] = a % 10;
		a /= 10;
		i++;
	}
	i = 0;
	while (b)
	{
		b_arr[i] = b % 10;
		b /= 10;
		i++;
	}
	a = 0;
	b = 0;
	for (int i = 0; i < 3; i++)
	{
		a = 10 * a + a_arr[i];
		b = 10 * b + b_arr[i];
	}
	if (a > b)
		printf("%d\n", a);
	else
		printf("%d\n", b);
	return (0);
}