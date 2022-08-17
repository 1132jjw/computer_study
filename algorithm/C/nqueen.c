#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int N_queen(int num, int n, int *board)
{
	if (num == n)
	{
		printf("\n");
		return 1;
	}
	else
	{
		int cases = 0;
		//num 번째 줄에 queen 위치
		for (int i = 0; i < n; i++)
		{
			//0~num-1 번째 줄에 겹치는 queen 있는가 확인
			bool overlap = false;
			for (int j = 0; j < num; j++)
			{
				int col = board[j];  //queen의 위치: (j, col)
				if (col == i || (abs(num - j) == abs(i - col)))
				{
					// printf("num, i, j, col: %d %d %d %d\n", num, i, j, col);
					overlap = true;
					break;
				}
			}
			if (overlap == false) //겹치지 않을 경우
			{
				printf("queen position: [%d, %d]\n", num, i);
				board[num] = i;
				int x = cases;
				cases += N_queen(num + 1, n, board);
				if (x != cases)
					printf("\n");
			}
		}
		return cases;
	}
}

int     main(void)
{
	int n, cases;
	int *board;

	n = 0;
	cases = 0;
	board = NULL;
	printf("N 입력: ");
	scanf("%d", &n);
	if (n < 1)
	{
		printf("잘못된 n 입력\n");
		return (0);
	}
	board = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
		board[i] = 0;
	cases = N_queen(0, n, board);
	if (cases == 0)
		printf("경우의 수가 없습니다.\n");
	else
		printf("경우의 수: %d\n", cases);
	return 0;
}
