
int ft_strcmp(char *s1, char *s2)
{
	int i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if ((unsigned int)s1[i] > (unsigned int)s2[i])
			return (1);
		if ((unsigned int)s1[i] < (unsigned int)s2[i])
			return (-1);
		i++;
	}
	if ((unsigned int)s1[i] == (unsigned int)s2[i])
		return (0);
}

int true_strcmp(char *s1, char *s2)
{
	int i = 0;
	
	while(s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{	
		i++;
	}
	return (s1[i] - s2[i]);
}
