#include <stdio.h>

#define swap(type, x, y) do{type tmp; tmp = x; x = y; y = tmp;}while(0)

int		main(void)
{
	int	x, y;

	x = 1;
	y = 2;
	printf("x : %d y : %d\n", x, y);
	swap(int, x, y);
	printf("x : %d y : %d\n", x, y);
	return (0);
}