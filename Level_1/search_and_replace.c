#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void s_a_r(char *str, char find, char replace)
{
	int	i = 0;
	int flag = 0;

	while (str[i])
	{
		if (str[i] == find)
			str[i] = replace; flag = 1;
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 4 && !av[2][1] && !av[3][1])
		s_a_r(av[1], *av[2], *av[3]);
	write(1, "\n", 1);
}