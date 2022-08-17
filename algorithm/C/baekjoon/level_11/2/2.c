#include <stdio.h>

int		fibonacci(int nb)
{
	if (nb == 0)
		return (0);
	if (nb == 1)
		return (1);
	return (fibonacci(nb - 1) + fibonacci(nb - 2));
}

int		main(void)
{
	int		n, result;

	scanf("%d", &n);
	result = fibonacci(n);
	printf("%d\n", result);
	return (0);
}