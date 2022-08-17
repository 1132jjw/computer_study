#include <stdio.h>

int		main(void)
{
	int		arr[10];
	int		div[42] = {0, };
	int		numbers = 0;

	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
		div[arr[i] % 42]++;
	}
	for (int i = 0; i < 42; i++)
	{
		if (div[i] != 0)
			numbers++;
	}
	printf("%d", numbers);
	return (0);
}