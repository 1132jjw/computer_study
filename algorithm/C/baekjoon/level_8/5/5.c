#include <stdio.h>

int		find_max_nb(int	*arr)
{
	int		i;
	int		max_position;
	int		max;

	max_position = 0;
	i = 0;
	max = 0;
	while (i < 26)
	{
		if (arr[i] > max)
		{
			max = arr[i];
			max_position = i;
		}
		i++;
	}
	i = 0;
	while (i < 26)
	{
		if ((arr[i] == max) && i != max_position)
			return (-1);
		i++;
	}
	return (max_position);
}

int		main(void)
{
	int		i;
	int		alphabet[26] = {0, };
	int		max_position;
	char	str[1000000];

	i = 0;
	scanf("%s", str);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a')
			alphabet[str[i] - 'a']++;
		else if (str[i] >= 'A')
			alphabet[str[i] - 'A']++;
		i++;
	}
	max_position = find_max_nb(alphabet);
	if (max_position == -1)
		printf("?\n");
	else
		printf("%c\n", max_position + 'A');
	return (0);
}