#include <stdio.h>

int		main(void)
{
	int		a, b;

	scanf("%d", &a);
	do {
		scanf("%d", &b);
		if (b <= a)
			printf("a보다 큰 값을 입력하세요.\n");
	} while (b <= a);
	printf("b - a는 %d입니다.\n", b - a);
	return (0);
}