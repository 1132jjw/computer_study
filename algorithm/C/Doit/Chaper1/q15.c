#include <stdio.h>

int		main(void)
{
	int		w;
	int		h;

	scanf("%d %d", &w, &h);
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < w; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return (0);
}