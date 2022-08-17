#include <stdio.h>
#include <math.h>

int		main(void)
{
	const double pi = acos(-1.0);
	double	R;

	scanf("%lf", &R);
	printf("%.6lf\n", R * R * pi);
	printf("%.6lf\n", 2 * R * R);
	return (0);
}