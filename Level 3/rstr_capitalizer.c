#include <unistd.h>

int is_upper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

int is_lower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

int is_end(int c)
{
	if (c == ' ' || c == '\0' || c == '\t')
		return (1);
	return (0);
}

int to_lower(int c)
{
	if (is_upper(c))
		c = c + ('a' - 'A');
	return (c);
}

int to_upper(int c)
{
	if (is_lower(c))
		c = c - ('a' - 'A');
	return (c);
}

int main(int argc, char const *argv[])
{
	int i = 1, j;
	char letter;
	if (argc > 0)
	{
		while (i < argc)
		{
			j = 0;
			while (argv[i][j])
			{
				letter = argv[i][j];
				if (is_upper(argv[i][j]))
					letter = to_lower(argv[i][j]);
				if (is_lower(argv[i][j]) && is_end(argv[i][j + 1]))
					letter = to_upper(argv[i][j]);
				write(1, &letter, 1);
				j++;
			}
			write(1, "\n", 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
