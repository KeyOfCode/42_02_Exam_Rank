/* Write a function that reverses (in-place) a string. */
char	*ft_strrev(char *str)
{
	int i = 0;
	char aux;
	int len = 0;
	while (str[len])
		len++;
	while (i < len / 2)
	{
		aux = str[i];
		str [i] = str[len - i];
		str[len - i] = aux;
		i++;
	}
	return (str);
}