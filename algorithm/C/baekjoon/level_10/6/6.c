#include <stdio.h>

int		main(void)
{
	int		x, y, w, h, result;

	scanf("%d %d %d %d", &x, &y, &w, &h);
	if (w - x > x)
	{
		result = x;
	}
	else
		result = w - x;
	if (h - y > y && y < result)
		result = y;
	else if (h - y <= y && h - y < result)
		result = h - y;
	printf("%d\n", result);
	return (0);
}