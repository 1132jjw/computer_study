#include <stdio.h>

int		main(void)
{
	int		A, B, C, nb;
	int		arr[10] = {0, };

	scanf("%d", &A);
	scanf("%d", &B);
	scanf("%d", &C);
	nb = A * B * C;
	while (nb)
	{
		arr[nb % 10]++;
		nb /= 10;
	}
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	}
	return (0);
}