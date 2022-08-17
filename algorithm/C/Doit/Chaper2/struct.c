#include <stdio.h>
#include <string.h>

typedef	struct	s_struct{
	char		name[20];
	int			height;
	float		vision;
}				t_struct;

int		main(void)
{
	t_struct a;
	t_struct b;

	strlcpy(a.name, "jeujeon", 8);
	a.height = 175;
	a.vision = 0.5;
	strlcpy(b.name, "hello", 6);
	b.height = 160;
	b.vision = 1.5;
	printf("%s : %d %.1f\n", a.name, a.height, a.vision);
	printf("%s : %d %.1f\n", b.name, b.height, b.vision);
	return (0);
}