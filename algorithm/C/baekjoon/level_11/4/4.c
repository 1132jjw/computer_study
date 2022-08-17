#include <stdio.h>

void	hanoi(int n)
{
	hanoi(n - 1);
	if (n = 0)
		
}

int		main(void)
{
	int		n;
	scanf("%d", &n);
	hanoi(n);
	return (0);
}