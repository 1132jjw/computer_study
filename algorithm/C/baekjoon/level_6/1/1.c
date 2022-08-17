#include <stdio.h>
#include <stdlib.h>

int		main(void)
{
	int		arr_size;
	int		*arr;
	int		nb;
	int		min_nb;
	int		max_nb;

	scanf("%d", &arr_size);
	arr = (int *)malloc(sizeof(int) * arr_size);
	for (int i = 0; i < arr_size; i++)
	{
		scanf("%d", &nb);
		arr[i] = nb;
	}
	min_nb = arr[0];
	max_nb = arr[0];
	for (int i = 1; i < arr_size; i++)
	{
		if (arr[i] < min_nb)
			min_nb = arr[i];
		else if (arr[i] > max_nb)
			max_nb = arr[i];
	}
	printf("%d %d", min_nb, max_nb);
	return (0);
}