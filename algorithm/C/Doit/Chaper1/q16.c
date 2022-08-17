#include <stdio.h>

void	triangleB(int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}

int		main(void)
{
	int		n;

	scanf("%d", &n);
	triangleB(n);
	return (0);
}