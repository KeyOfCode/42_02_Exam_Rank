
char *ft_strcpy(char *s1, char *s2)
{
	int i = 0;
	if (s1 && s2)
	{
		while (s1[i] != '\0' )
		{
			s2[i] = s1[i];
			i++;
		}
		s2[i] = '\0';
	}
	return (s2);
}
