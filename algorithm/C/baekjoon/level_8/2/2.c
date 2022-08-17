#include <stdio.h>
#include <stdlib.h>

int		main(void)
{
	int		num;
	int		total;
	char	*nb_str;

	total = 0;
	scanf("%d", &num);
	nb_str = (char *)malloc(sizeof(char) * num);
	scanf("%s", nb_str);
	for (int i = 0; i < num; i++)
	{
		total += nb_str[i] - '0';
	}
	printf("%d\n", total);
	return (0);
}