#include <unistd.h>

void	alpha_mirror(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (i >= 'a' && i <= 'z')
			s[i] = 'z' - s[i] + 'a';
		else if (i >= 'A' && i <= 'Z')
			s[i] = 'Z' - s[i] + 'A';
		write(1, &s[i], 1);
		i++;
	}
}

int main (int ac, char **av)
{
	if (ac == 2)
		alpha_mirror(av[1]);
	write(1, "\n", 1);
}