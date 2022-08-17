#include <stdio.h>

int		fibonacci(int nb)
{
	if (nb == 0)
		return (0);
	else if (nb == 1)
		return (1);

	return (fibonacci(nb - 1) + fibonacci(nb - 2));
}

int		main(void)
{
	int		result;
	int		n;

	scanf("%d", &n);
	result = fibonacci(n);
	printf("%d\n", result);
	return (0);
}