#include <stdio.h>

int		min3(int a, int b, int c)
{
	int		min;

	min = a;
	if (b < min)
		min = b;
	if (c < min)
		min = c;
	return (min);
}

int		main(void)
{
	int		a, b, c, min;

	scanf("%d %d %d", &a, &b, &c);
	min = min3(a, b, c);
	printf("%d\n", min);
	return (0);
}