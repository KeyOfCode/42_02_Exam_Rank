#include <unistd.h>

void	ft_putchar_n(char c, int i)
{
	while (i > 0)
	{
		write(1, &c, 1);
		i--;
	}
}

void repeat_alpha(char *str)
{
	int i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			ft_putchar_n(str[i], str[i] + 1 - 'a');
		else if (str[i] >= 'A' && str[i] <= 'Z')
			ft_putchar_n(str[i], str[i] + 1 - 'A');
		else
			write(1, &str[i], 1);
		i++;
	}
}

int main(int argc, char **argv)
{
	if (argc == 2)
		repeat_alpha(argv[1]);
	write (1, "\n", 1);
}

/* {
		while (argv[1][i])
		{
			if (is_letter(argv[1][i]) == 1)
			{
				j = (argv[1][i]);
				while (j >= 65)
				{
					write(1, &(argv[1][i]), 1);
					j--;
				}
			}
			if (is_letter(argv[1][i]) == 2)
			{
				j = (argv[1][i]);
				while (j >= 97)
				{
					write(1, &(argv[1][i]), 1);
					j--;
				}
			}
			i++;
		}
	} */