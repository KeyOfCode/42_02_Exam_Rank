#include <unistd.h>

void c_t_s(char *s)
{
	int i = 0;
	while (s[i])
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
		{
			s[i] = s[i] + 32;
			write(1, "_", 1);
		}
		write(1, &s[i], 1);
		i++;
	}	
}

int main (int ac, char **av)
{
	if (ac == 2)
		c_t_s(av[1]);
	write(1, "\n", 1);
}