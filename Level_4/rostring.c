#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

char *ft_strncpy(char *dst, char *src, int n)
{
	int i = 0;
	while (i < n && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

char **ft_split(char *str)
{
	int i = 0, j = 0, k = 0, wc = 0;
	while (str[i])
	{
		while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		if (str[i])
			wc++;
		while (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
			i++;
	}
	char **out = (char **)malloc(sizeof(char *) * (wc + 1));
	i = 0;
	while (str[i])
	{
		while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		j = i;
		while (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
			i++;
		if (i > j)
		{
			out[k] = (char *)malloc(sizeof(char) * ((i - j) + 1));
			ft_strncpy(out[k++], &str[j], i - j);
		}
	}
	out[k] = NULL;
	return (out);
}

void	ft_putstr(char *str)
{
	int i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	rotstring(char *str)
{
	char **out;
	int len = 0, i = 1;
	out = ft_split(str);

	while (out[len] != NULL)
		len++;
	if (len > 1)
	{
		while (i < len)
		{
			ft_putstr(out[i]);
			write(1, " ", 1);
			i++;
		}
	}
	ft_putstr(out[0]);
}

int	main(int argc, char *argv[])
{
	if (!(argc < 2))
		rotstring(argv[1]);
	write(1, "\n", 1);
}
