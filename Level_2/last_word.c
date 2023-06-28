#include <unistd.h>

int	ft_strlen(char *str)
{
	int i = 0;
	while(str[i])
		i++;
	return (i);
}

void	last_word(char *str)
{
	int i = 0;
	int len = ft_strlen(str);
	if (len == 0)
		return ;
	while (str[len] == ' ' || (str[len] >= 9 && str[len] <= 13))
		len--;
	i = len;
	while (!(str[i] == ' ' || (str[i] >= 9 && str[i] <= 13)))
		i--;
	i++;
	while (i < len)
		write(1, &str[i++], 1);
}

int	main (int ac, char **av)
{
	if (ac == 2)
		last_word(av[1]);
	write(1, "\n", 1);
}

/* void	last_word(char *str)
{
	int	j = 0;
	int i = 0;

	while (str[i])
	{
		if (str[i] == ' ' && str[i + 1] >= 33 && str[i + 1] <= 126)
			j = i + 1;
		i++;
	}
	while (str[j] >= 33 && str[j] <= 127)
	{
		write(1, &str[j], 1);
		j++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		last_word(argv[1]);
	write(1, "\n", 1);
	return (0);
} */