#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*temp;
	while(lst)
	{
		temp = lst->next;
		f(lst->content);
		lst = temp;
	}
}
