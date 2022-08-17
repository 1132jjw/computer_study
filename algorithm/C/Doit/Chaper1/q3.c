#include <stdio.h>

int		min4(int a, int b, int c, int d)
{
	int		min;

	min = a;
	if (b < min)
		min = b;
	if (c < min)
		min = c;
	if (d < min)
		min = d;
	return (min);
}

int		main(void)
{
	int		a, b, c, d, min;

	scanf("%d %d %d %d", &a, &b, &c, &d);
	min = min4(a, b, c, d);
	printf("%d\n", min);
	return (0);
}