/**
 * @brief The strpbrk() function locates in the null-terminated string s the first occurrence of any character in the string charset and returns a pointer to
     this character.  
	 If no characters from charset occur anywhere in s strpbrk() returns NULL.
 * 
 * @param s1 
 * @param s2 
 * @return char* 
 */
char	*ft_strpbrk(const char *s1, const char *s2)
{
	int i = 0;
	int j;
	if (!s1 || !s2)
	{
		return (0);
	}
	while (*s1)
	{
		j = 0;
		while(s2[j])
		{
			if (*s1 == s2[j])
				return ((char *)s1);
			j++;
		}
		s1++;
	}
	return (0);
}