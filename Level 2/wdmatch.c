#include <unistd.h>

void ft_putstr(char const *str)
{
	int i = 0;

	while (str[i])
		write(1, &str[i++], 1);
}

void ft_wdmatch(char *s1, char *s2)
{
    int i = 0, j = 0;

    while (s2[j])
    {
        if (s2[j++] == s1[i])
            i ++;
    }
    if (s1[i] == '\0')
        ft_putstr(s1);
}

int main (int ac, char **av)
{
    if (ac == 3)
    {
        ft_wdmatch(av[1], av[2]);
    }
    write (1, "\n", 1);
}