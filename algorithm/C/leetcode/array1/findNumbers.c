#include <stdio.h>

int findNumbers(int* nums, int numsSize)
{
	int		i;
	int		tmp;
	int		cnt;
	int		res;

	res = 0;
	i = 0;
	while (i < numsSize)
	{
		cnt = 0;
		tmp = nums[i];
		while (tmp >= 10)
		{
			tmp /= 10;
			cnt++;
		}
		if (cnt % 2 == 1)
			res++;
		i++;
	}
	return (res);
}

int		main(void)
{
	int		nums[5] = {1, 11, 111, 1111, 11111};
	int		numsSize = 5;

	printf("%d\n", findNumbers(nums, numsSize));
	return (0);
}