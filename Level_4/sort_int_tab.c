

void sort_int_tab(int *tab, unsigned int size)
{
	unsigned int i = 0;
	int temp;

	while (i < (size - 1))
	{
		if (tab[i] > tab[i + 1])
		{
			temp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = temp;
			i = 0;
		}
		else
			i++;
	}
}

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int lst[] = {5, 3, 4, 2, 1, 3, 6};
	int size = 7;
	int *tab = (int *)malloc(size + 1);
	for (int j = 0; j < size; j++)
		tab[j] = lst[j];
	sort_int_tab(tab, size);
	int i = 0;
	while(tab[i])
		printf("%d", tab[i++]);
}

