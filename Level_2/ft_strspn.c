#include <unistd.h>

size_t	ft_strspn(const char *s, const char *accept)
{
	size_t i = 0;
	int j;
	int flag = 0;
	while (s[i])
	{
		j = 0;
		flag = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
				flag = 1;
			j++;
		}
		if (flag)
			i++;
		else
			return(i);
	}
}

#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return ((char *)s);
		++s;
	}
	return (0);
}

size_t	ft_strspn(const char *s, const char *accept)
{
	size_t i = 0;

	while (s[i] != '\0')
	{
		if (ft_strchr(accept, s[i]) == 0)
			break;
		++i;
	}
	return (i);
}