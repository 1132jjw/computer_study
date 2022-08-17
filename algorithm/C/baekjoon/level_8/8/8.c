#include <stdio.h>

int		main(void)
{
	int		i;
	int		time;
	char	c;
	char	str[15];

	i = 0;
	time = 0;
	scanf("%s", str);
	while (str[i])
	{
		c = str[i];
		if (c >= 'A' && c <= 'C')
			time += 3;
		else if (c >= 'D' && c <= 'F')
			time += 4;
		else if (c >= 'G' && c <= 'I')
			time += 5;
		else if (c >= 'J' && c <= 'L')
			time += 6;
		else if (c >= 'M' && c <= 'O')
			time += 7;
		else if (c >= 'P' && c <= 'S')
			time += 8;
		else if (c >= 'T' && c <= 'V')
			time += 9;
		else if (c >= 'W' && c <= 'Z')
			time += 10;
		i++;
	}
	printf("%d\n", time);
	return (0);
}