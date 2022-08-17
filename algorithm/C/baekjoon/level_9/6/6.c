#include <stdio.h>

int		main(void)
{
	int		T, H, W, N, result;
	
	scanf("%d", &T);
	for (int i = 0; i < T; i++)
	{
		scanf("%d %d %d", &H, &W, &N);
		result = ((N - 1) / H + 1) + N % H * 100;
		if (N % H == 0)
			result += H * 100;
		printf("%d\n", result);	
	}
	return (0);
}