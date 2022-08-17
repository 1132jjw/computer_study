#include <stdio.h>
#include <math.h>

int		main(void)
{
	int		T;
	int		x, y, distance, max, time;

	scanf("%d", &T);
	for(int i = 0; i < T; i++)
	{
		time = 0;
		scanf("%d %d", &x, &y);
		distance = y - x;
		max = sqrt(distance);
		time += max * 2 - 1;
		distance -= pow(max, 2);
		while(distance)
		{
			for(int j = max; j > 0; j--)
			{
				if (j <= distance)
				{
					distance -= j;
					time++;
				}
			}
		}
		printf("%d\n", time);
	}
	return (0);
}