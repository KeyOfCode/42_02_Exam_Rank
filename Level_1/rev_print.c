#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i = 0;

	if (str)
	{
		while (str[i] != '\0')
			i++;
	}
	return (i);
}

int	main(int ac, char **av)
{
	int len;

	if (ac == 2)
	{
		len = ft_strlen(av[1]);
		while (len >= 0)
			write(1, &av[1][len--], 1);
	}
	write(1, "\n", 1);
}
