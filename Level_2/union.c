#include <unistd.h>

int check(int c, char *str, int index)
{
    int i = 0;
    while (i < index)
    {
        if (str[i] == c)
            return (0);
        i++;
    }
    return (1);
}

void    ft_union(char *s1, char *s2)
{
    int i = 0, j = 0, k = 0;
    while (s1[i])
        i++;   
    while (s2[j])
        s1[i] = s2[j]; i++; j++;
    while (k <= i)
        if (check(s1[k], s1, k) == 1)
            write(1, &s1[k], 1);
        k++;
}

int main (int ac, char **av)
{
    if (ac == 3)
    {
        ft_union(av[1], av[2]);
    }
    write (1, "\n", 1);
}