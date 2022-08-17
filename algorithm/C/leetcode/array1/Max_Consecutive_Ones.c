#include <stdio.h>

int findMaxConsecutiveOnes(int* nums, int numsSize){
    int     i;
    int     max;
    int     cnt;
    
    max = 0;
    i = 0;
    while (i < numsSize)
    {
        cnt = 0;
		printf("i : %d\n", i);
        while (nums[i] == 1 && i != numsSize)
        {
            cnt++;
            i++;
        }
        if (max <= cnt)
            max = cnt;
		printf("i : %d\n", i);
        if (i == numsSize)
            break ;
        i++;
    }
    return (max);
}

int		main(void)
{
	int		nums[6] = {1, 0, 1, 1, 0, 1};
	int		numsSize = 6;

	printf("%d\n", findMaxConsecutiveOnes(nums, numsSize));
	return (0);
}