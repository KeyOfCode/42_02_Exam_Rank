#include <unistd.h>

void	ft_putnbr(int nbr)
{
	char n;
	if (nbr >= 10)
	{
		ft_putnbr(nbr / 10);
		nbr = nbr % 10;
	}
	n = nbr + '0';
	write(1, &n, 1);
}

int	is_prime(int num)
{
	int i = 2;
	while (i <= (num / 2))
	{
		if (num % i == 0)
			return (0);
		i++;
	}
	return (1);
}

void	ft_prime_sum(int num)
{
	int i = 2, res = 0;

	while (i <= num)
	{
		if (is_prime(i))
			res = res + i;
		i++;
	}
	ft_putnbr(res);
}


int main (int ac, char **av)
{
	int num = ft_atoi(av[1]);
	if (ac == 2 && num >= 0)
	{
		ft_prime_sum(num);
	}
	write (1, "\n", 1);
}