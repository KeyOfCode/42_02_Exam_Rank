#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>


void do_op(char *x, char *op, char *y)
{
	int a = atoi(x);
	int b = atoi(y);
	int res = 0;

	if (op[0] == '+')
		res = a + b;
	if (op[0] == '-')
		res = a - b;
	if (op[0] == '*')
		res = a * b;
	if (op[0] == '/')
		res = a / b;
	if (op[0] == '%')
		res = a / b;
	printf("%d\n", res);
}

int main (int ac, char **av)
{
	if (ac == 4)
		do_op(av[1], av[2], av[3]);
	else
		write(1, "\n", 1);
}

/* int main(int argc, char *argv[])
{
	if (argc == 4)
	{
		if (argv[2][0] == '+')
			printf("%d", (atoi(argv[1]) + atoi(argv[3])));
		if (argv[2][0] == '-')
			printf("%d", (atoi(argv[1]) - atoi(argv[3])));
		if (argv[2][0] == '*')
			printf("%d", (atoi(argv[1]) * atoi(argv[3])));
		if (argv[2][0] == '/')
			printf("%d", (atoi(argv[1]) / atoi(argv[3])));
		if (argv[2][0] == '%')
			printf("%d", (atoi(argv[1]) % atoi(argv[3])));
	}
	printf("\n");
	return (0);
} */