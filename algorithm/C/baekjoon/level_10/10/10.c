#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int		main(void)
{
	int		T, x1, y1, r1, x2, y2, r2;
	double	distance;

	scanf("%d", &T);
	for(int i = 0; i < T; i++)
	{
		scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);
		distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
		if (distance == 0 && r1 == r2)
			printf("-1\n");
		else if (distance > r1 + r2)
			printf("0\n");
		else if (distance == r1 + r2)
			printf("1\n");
		else
		{
			if (abs(r1 - r2) < distance)
				printf("2\n");
			else if (abs(r1 - r2) == distance)
				printf("1\n");
			else
				printf("0\n");
		}
	}
	return (0);
}