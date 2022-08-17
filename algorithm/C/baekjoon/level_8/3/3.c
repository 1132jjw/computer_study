#include <stdio.h>

int		main(void)
{
	int		i;
	char	S[100];
	int		alphabet[26];

	i = 0;
	for (int j = 0; j < 26; j++)
		alphabet[j] = -1;
	scanf("%s", S);
	while (S[i])
	{
		if (alphabet[S[i] - 'a'] == -1)
			alphabet[S[i] - 'a'] = i;
		i++;
	}
	i = 0;
	while (i < 26)
	{
		printf("%d ", alphabet[i]);
		i++;
	}
	printf("\n");
	return (0);
}