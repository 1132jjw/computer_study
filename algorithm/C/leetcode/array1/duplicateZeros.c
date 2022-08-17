#include <stdio.h>

void duplicateZeros(int* arr, int arrSize)
{
	int		idx;
	int		tmp_next_index;
	int		zero_cnt;

	idx = 0;
	while (idx < arrSize)
	{
		if (arr[idx] == 0)
		{
			zero_cnt = 0;
			while (arr[idx] == 0)
			{
				zero_cnt++;
				idx++;
				if (idx == arrSize)
					break ;
			}
		}
	}
}

int		main(void)
{
	int		arr[8] = {1, 0, 2, 3, 0, 4, 5, 0};
	int		arrSize = 8;

	duplicateZeros(arr, arrSize);
	for(int i = 0; i < arrSize; i++)
		printf("%d\n", arr[i]);
	return (0);
}