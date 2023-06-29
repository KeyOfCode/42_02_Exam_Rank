#include <unistd.h>

/* The strcspn() function spans the initial part of the null-terminated string s as long as the characters from s do not occur in the null-terminated
	 string charset (it spans the complement of charset).  In other words, it computes the string array index of the first character of s which is also
	 in charset, else the index of the first null character. */
size_t ft_strcspn(const char *s, const char *reject)
{
	size_t i = 0;
	int j;
	while (s[i] != '\0')
	{
		j = 0;
		while (reject[j] != '\0')
		{
			if (s[i] == reject[j])
				return (i);
			j++;
		}
		i++;
	}
	return (i);
}