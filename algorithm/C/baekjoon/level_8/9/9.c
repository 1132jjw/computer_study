#include <stdio.h>

int		main(void)
{
	int		i;
	int		nb;
	char	str[100];

	i = 0;
	nb = 0;
	scanf("%s", str);
	while (str[i])
	{
		if (str[i] == 'c' && str[i + 1] == '=')
		{
			nb++;
			i++;
		}
		else if (str[i] == 'c' && str[i + 1] == '-')
		{
			nb++;
			i++;
		}
		else if (str[i] == 'd' && str[i + 1] == 'z' && str[i + 2] == '=')
		{
			nb++;
			i += 2;
		}
		else if (str[i] == 'd' && str[i + 1] == '-')
		{
			nb++;
			i++;
		}
		else if (str[i] == 'l' && str[i + 1] == 'j')
		{
			nb++;
			i++;
		}
		else if (str[i] == 'n' && str[i + 1] == 'j')
		{
			nb++;
			i++;
		}
		else if (str[i] == 's' && str[i + 1] == '=')
		{
			nb++;
			i++;
		}
		else if (str[i] == 'z' && str[i + 1] == '=')
		{
			nb++;
			i++;
		}
		else
			nb++;
		i++;
	}
	printf("%d\n", nb);
	return (0);
}