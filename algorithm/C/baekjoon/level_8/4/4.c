#include <stdio.h>

int		main(void)
{
	int		test;
	int		renum;
	int		i;
	int		j;
	int		k;
	char	str[20];
	
	i = 0;
	k = 0;
	scanf("%d", &test);
	while (i++ < test)
	{
		scanf("%d %s", &renum, str);
		k = 0;
		while (str[k])
		{
			j = 0;
			while (j++ < renum)
				printf("%c", str[k]);
			k++;
		}
		printf("\n");
	}
	return (0);
}