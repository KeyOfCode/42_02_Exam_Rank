#include <unistd.h>

void	ultstr(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
		else if (s[i] >= 'A' && s[i] <= 'Z')
			s[i] = s[i] + 32;
		write(1, &s[i], 1);
		i++;
	}
}

int main (int ac, char **av)
{
	if (ac == 2)
		ultstr(av[1]);
	write(1, "\n", 1);
}
