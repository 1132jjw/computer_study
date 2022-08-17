#include <stdio.h>

int		main(void)
{
	int		num;
	int		cnt;

	cnt = 0;
	scanf("%d", &num);
	if (num == 0)
		cnt = 1;
	while (num)
	{
		num /= 10;
		cnt += 1;
	}
	printf("%d\n", cnt);
	return (0);
}