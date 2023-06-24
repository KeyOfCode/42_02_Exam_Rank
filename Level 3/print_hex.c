#include <unistd.h>

unsigned long ft_atoi(char *num)
{
	unsigned long result = 0, i = 0;
	while (num[i] >= '0' && num[i] <= '9')
	{
		result = (num[i] - '0') + (result * 10);
		i++;
	}
	return (result);
}

void	ft_puthex(unsigned long n)
{
	char digit;
	char *l_hex = "0123456789abcdef";

	if (n >= 16)
		ft_puthex(n / 16);
	digit = (n % 16);
	write(1, &l_hex[digit], 1);
}

int	main (int ac, char **av)
{
	int	i = 0;
	if (ac == 2)
	{
		unsigned long num = ft_atoi(av[1]);
		ft_puthex(num);
	}
	write(1, "\n", 1);
}