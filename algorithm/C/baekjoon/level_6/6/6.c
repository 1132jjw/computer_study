#include <stdio.h>
#include <stdlib.h>

int		main(void)
{
	int		nb;
	int		point;
	int		total_point;
	int		j;
	char	str[81] = {0, };

	j = 0;
	point = 0;
	total_point = 0;
	scanf("%d", &nb);
	for (int i = 0; i < nb; i++)
	{
		scanf("%s", str);
		while (str[j] != '\0')
		{
			if (str[j] == 'O')
			{
				while (str[j] == 'O' && str[j + 1] == 'O')
				{
					point++;
					total_point += point;
					j++;
				}
				point++;
				total_point += point;
				point = 0;
			}
			j++;
		}
		printf("%d\n", total_point);
		total_point = 0;
		j = 0;
	}
	return (0);
}