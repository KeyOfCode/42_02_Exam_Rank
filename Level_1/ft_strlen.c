
int	ft_strlen(char *str)
{
	int	i = 0;

	if (str)
	{
		while (str[i] != '\0')
			i++;
	}
	return (i);
}