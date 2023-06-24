#include <unistd.h>

int ft_atoi(char *str)
{
	int res = 0;
	while (*str >= '0' && *str <= '9')
	{
		res = (*str - '0') + (res * 10);
		str++;
	}
	return (res);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int num)
{
	if ( num > 9)
	{
		ft_putnbr(num / 10);
	}
	ft_putchar(num % 10 + '0');
}

int main(int argc, char *argv[])
{
	int mult = 1, num;
	if (argc == 2)
	{
		num = ft_atoi(argv[1]);
		while (mult <= 9)
		{
			ft_putnbr(mult);
			write (1, " x ", 3);
			ft_putnbr(num);
			write (1, " = ", 3);
			ft_putnbr(mult * num);
			write (1, "\n", 1);
			mult++;
		}
	}
	write (1, "\n", 1);
}
