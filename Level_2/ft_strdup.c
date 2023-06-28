#include <unistd.h>
#include <stdlib.h>

int	ft_strlen(char *s)
{
	int i = 0;
	while (s[i])
		i++;
	return (i);
}

char *ft_strdup(char *src)
{
	char *res = (char *)malloc(sizeof(char) * (ft_strlen(src)+1));
	if (!res)
		return (NULL);
	int i = 0;
	while (src[i])
	{
		res[i] = src[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}