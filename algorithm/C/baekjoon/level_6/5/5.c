#include <stdio.h>
#include <stdlib.h>

int		main(void)
{
	int		sub_nb;
	int		max_nb;
	float	*arr;
	float	avr;

	scanf("%d", &sub_nb);
	arr = (float *)malloc(sizeof(float) * sub_nb);
	for (int i = 0; i < sub_nb; i++)
	{
		scanf("%f", &arr[i]);
	}
	max_nb = arr[0];
	for (int i = 1; i < sub_nb; i++)
	{
		if (arr[i] > max_nb)
			max_nb = arr[i];
	}
	for (int i = 0; i < sub_nb; i++)
	{
		arr[i] = arr[i] / max_nb * 100;
	}
	for (int i = 0; i < sub_nb; i++)
	{
		avr += arr[i];
	}
	avr /= sub_nb;
	printf("%.2f", avr);
	return (0);
}