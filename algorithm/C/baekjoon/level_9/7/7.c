#include <stdio.h>

int		main(void)
{
	int		T, k, n;
	int		j;
	int		n_back, k_back;
	int		arr[14];

	scanf("%d", &T);
	for (int i = 0; i < T; i++)
	{
		for (int i = 0; i < 14; i++)
			arr[i] = i + 1;
		scanf("%d", &k);
		scanf("%d", &n);
		k_back = k;
		while (k)
		{
			n_back = n;
			while (n_back)
			{
				j = 0;
				while (j < n_back)
				{
					arr[n_back] += arr[j];
					// printf("%d층 %d호 : %d\n", k_back - k + 1,j + 1, arr[j]);
					j++;
				}
				n_back--;
			}
			k--;
		}
		// printf("%d층의 %d호 : %d\n", k_back, n, arr[n - 1]);
		printf("%d\n", arr[n - 1]);
	}
	return (0);
}