#include <stdio.h>

int		main(void)
{
	int		A, B, V;
	int		result;

	scanf("%d %d %d", &A, &B, &V);
	if (A <= B)
	{
		printf("-1\n");
		return (0);
	}
	else
	{
		if ((V - B) % (A - B) == 0)
			result = (V - B) / (A - B);
		else
			result = (V - B) / (A - B) + 1;
	}
		printf("%d\n", result);
	return (0);
}