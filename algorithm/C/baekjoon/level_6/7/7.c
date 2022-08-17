#include <stdio.h>
#include <stdlib.h>

int		main(void)
{
	int		C;
	int		N;
	int		*N_arr;
	float	student_nb;
	float	total_score;
	float	avr;

	total_score = 0;
	student_nb = 0;
	scanf("%d", &C);
	for (int i = 0; i < C; i++)
	{
		scanf("%d", &N);
		N_arr = (int *)malloc(sizeof(int) * N);
		for (int j = 0; j < N; j++)
			scanf("%d", &N_arr[j]);
		for (int j = 0; j < N; j++)
			total_score += N_arr[j];
		avr = total_score / N;
		for (int j = 0; j < N; j++)
			if (N_arr[j] > avr)
				student_nb++;
		printf("%.3f%%\n", student_nb / N * 100);
		student_nb = 0;
		total_score = 0;
	}
	return (0);
}