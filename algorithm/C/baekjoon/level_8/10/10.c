#include <stdio.h>

int		main(void)
{
	int		result;
	int		cnt;
	int		nb;
	int		alphabet[26] = {0, };
	char	str[100];

	result = 0;
	scanf("%d", &nb);
	for (int i = 0; i < nb; i++)
	{
		for (int j = 0; j < 26; j++)
			alphabet[j] = 0;
		cnt = 0;
		scanf("%s", str);
		while (str[cnt])
		{
			if (alphabet[str[cnt] - 'a'] == 0)
				alphabet[str[cnt] - 'a'] = 1;
			else
				break ;
			while (str[cnt] == str[cnt + 1])
				cnt++;
			cnt++;
		}
		if (str[cnt] == '\0')
			result++;
	}
	printf("%d\n", result);
	return (0);
}