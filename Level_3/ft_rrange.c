#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
	int	*arry;
	int i = 0;
	int len = abs((end - start)) + 1;
	arry = (int *)malloc(sizeof(int) * len);

	while (i < len)
	{
		if (start < end)
		{
			arry[i] = end;
			end--;
			i++;
		}
		else
		{
			arry[i] = end;
			end++;
			i++;
		}
	}
	return (arry);
}