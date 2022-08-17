#include <stdio.h>

int		main(void)
{
	int		nb;
	int		arr[9];
	int		max_position;
	int		max_nb;

	for (int i = 0; i < 9; i++)
	{
		scanf("%d", &nb);
		arr[i] = nb;
	}
	max_nb = arr[0];
	max_position = 1;
	for (int i = 1; i < 9; i++)
	{
		if (arr[i] > max_nb)
		{
			max_nb = arr[i];
			max_position = i + 1;
		}
	}
	printf("%d\n%d", max_nb, max_position);
	return (0);
}