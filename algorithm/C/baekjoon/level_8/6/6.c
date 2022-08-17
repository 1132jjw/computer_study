#include <stdio.h>

int		main(void)
{
	int		i, nb, flag;
	char	str[1000001] = {0, };

	i = 0;
	nb = 0;
	flag = 0;
	scanf("%[^\n]s", str);
	while (str[i] != '\0')
	{
		if (str[i] == ' ')
		{
			flag = 0;
			i++;
		}
		while ((str[i] >= 'A' && str[i] <= 'Z') ||\
		(str[i] >= 'a' && str[i] <= 'z'))
		{
			flag = 1;
			i++;
		}
		i++;
		if (flag == 1)
			nb++;
	}
	printf("%d\n", nb);
	return (0);
}