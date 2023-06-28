typedef struct s_list t_list;

struct s_list
{
	int data;
	t_list *next;
};

t_list *sort_list(t_list *lst, int (*cmp)(int, int))
{
	t_list *head = lst;
	int aux;
	while (head)
	{
		if (!(*cmp)(head->data, head->next->data))
		{
			aux = head->data;
			head->data = head->next->data;
			head->next->data = aux;
		}
		head = head->next;
	}
	return(lst);
}
