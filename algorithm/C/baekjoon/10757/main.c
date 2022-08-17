#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	main(void)
{
	char	str1[10001];
	char	str2[10001];
	char	str_result[10001];
	int		i;
	int		l1;
	int		l2;
	int		l3;

	scanf("%s", str1);
	scanf("%s", str2);
	l1 = strlen(str1);
	l2 = strlen(str2);
	l3 = l1 > l2 ? l1 : l2;
	l3++;
	str_result[l3] = 0;
	for(int j = 0; j < l3; j++)
		str_result[j] = '0';
	l1--;
	l2--;
	l3--;
	while (l1 >= 0 && l2 >= 0)
	{
		if (str1[l1] + str2[l2] + str_result[l3] - 3 * '0' >= 10)
		{
			str_result[l3 - 1] += 1;
			str_result[l3] += str1[l1] + str2[l2] - 2 * '0' - 10;
		}
		else
			str_result[l3] += str1[l1] + str2[l2] - 2 * '0';
		l1--;
		l2--;
		l3--;
	}
	while (l1 >= 0)
	{
		if (str_result[l3] + str1[l1] - 2 * '0' >= 10)
		{
			str_result[l3 - 1] += 1;
			str_result[l3] += str1[l1] - '0' - 10;
		}
		else
			str_result[l3] += str1[l1] - '0';
		l1--;
		l3--;
	}
	while (l2 >= 0)
	{
		if (str_result[l3] + str2[l2] - 2 * '0' >= 10)
		{
			str_result[l3 - 1] += 1;
			str_result[l3] += str2[l2] - '0' - 10;
		}
		else
			str_result[l3] += str2[l2] - '0';
		l2--;
		l3--;
	}
	if (str_result[0] == '0')
	{
		l3 = strlen(str_result);
		i = 0;
		while (i < l3)
		{
			str_result[i] = str_result[i + 1];
			i++;
		}
	}
	printf("%s\n", str_result);
	return(0);
}