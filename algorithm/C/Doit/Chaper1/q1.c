#include <stdio.h>

int		max4(int a, int b, int c, int d)
{
	int		max;

	max = a;
	if (b > max)
		max = b;
	if (c > max)
		max = c;
	if (d > max)
		max = d;
	return (max);
}

int		main(void)
{
	int		a, b, c, d, max;

	scanf("%d %d %d %d", &a, &b, &c, &d);
	max = max4(a, b, c, d);
	printf("%d\n", max);
	return(0);
}