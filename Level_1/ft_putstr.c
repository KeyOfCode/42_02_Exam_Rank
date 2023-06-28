
void ft_putstr(char *str)
{
	int i = 0;
	if (str)
		while (str[i] != '\0')
			write(1, &str[i++], 1);
}