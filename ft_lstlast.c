#include "libft.h"
#include <stdio.h>

t_list  *ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);	
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}
/*
int	main(void)
{
	t_list *lst = (t_list *)malloc(sizeof(t_list));
	t_list *node = (t_list *)malloc(sizeof(t_list));
	lst->content = "lista primeiro no";
	node->content = "node segundo no";
	node->next = lst;
	lst = node;
	
	printf("\nretorno %p\n", ft_lstlast(lst));
	printf("retorno %p\n", node);
	return (0);
}
*/