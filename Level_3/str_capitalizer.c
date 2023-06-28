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

int is_start(int c)
{
	if (c == ' ' || c == '\t')
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

void ft_str_capital(char * str)
{
	int i = 0;
	char letter = str[i];
	if (is_lower(str[i]))
		letter = to_upper(str[i]);
	write(1, &letter, 1);
	while (str[++i])
	{
		letter = str[i];
		if (is_upper(str[i]))
			letter = to_lower(str[i]);
		if (is_lower(str[i]) && is_start(str[i - 1]))
			letter = to_upper(str[i]);
		write(1, &letter, 1);
	}
	write(1, "\n", 1);
}

int main(int argc, char *argv[])
{
	int i = 1;
	char letter;
	if (argc > 1)
	{
		while (i < argc)
		{
			ft_str_capital(argv[i]);
			i++;
		}
	}
	write(1, "\n", 1);
}