#include <unistd.h>
#include <stdio.h>

int	already_in(char *str, char c, int len)
{
	int i = 0;
	while(str[i] && (i < len || len == -1))
		if (str[i++] == c)
			return (1);
	return(0);
}

void	inter(char *s1, char *s2)
{
	int	i = 0;
	while (s1[i] != '\0')
	{
		if (!already_in(s1, s1[i], i) && already_in(s2, s1[i], -1))
			write(1, &s1[i], 1);
		i++;
	}
}

int main(int ac, char **av)
{
	if (ac == 3)
		inter(av[1], av[2]);
	write(1, "\n", 1);
}
