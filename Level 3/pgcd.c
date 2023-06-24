#include <stdio.h>
#include <stdlib.h>

void ft_pgcd(char *a, char *b)
{
	int n1, n2, i, res;
	n1 = atoi(a);
	n2 = atoi(b);
	if (n1 < 0 || n2 < 0)
		return ;
	while (n2 != 0)
	{
		int temp = n2;
		n2 = n1 % n2;
		n1 = temp;
	}
	printf("%d\n", n1);
}

int main (int ac, char **av)
{
	if (ac == 3)
		ft_pgcd(av[1], av[2]);
	printf("\n");
}