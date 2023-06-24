#include "unistd.h"

void	ft_putnbr(int n)
{
	char digit;

	if (n >= 10)
		ft_putnbr(n / 10);
	digit = (n % 10) + '0';
	write(1, &digit, 1);
}

int main (int ac, char **av)
{
	int i = 0;

	if (ac - 1 > 0)
	{
		ft_putnbr(ac - 1);	
	}
	write (1, "\n", 1);
}