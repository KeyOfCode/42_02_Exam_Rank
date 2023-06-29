#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/* Write a program called search_and_replace that takes 3 arguments, the first
arguments is a string in which to replace a letter (2nd argument) by
another one (3rd argument).

If the number of arguments is not 3, just display a newline.

If the second argument is not contained in the first one (the string)
then the program simply rewrites the string followed by a newline. */
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