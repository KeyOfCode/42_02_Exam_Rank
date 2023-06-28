#include <unistd.h>


void	rotone(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = (s[i] - 'a' + 1) % 26 + 'a';
		else if (s[i] >= 'A' && s[i] <= 'Z')
			s[i] = (s[i] - 'A' + 1) % 26 + 'A';
		write(1, &s[i], 1);
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		rotone(av[1]);
	write (1, "\n", 1);
}