#include "libft.h"

// void ft_lstclear(t_list **lst, void (*del)(void *))
// {
//     t_list *tmp;

//     if(!del)
//         return ;
//     while (lst)
//     {
//         del((*lst)->content);
//         tmp = *lst;
//         *lst = tmp->next;
//         free(tmp);
//     }
//     *lst = NULL;
// }

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*next;

	next = *lst;
	while (next)
	{
		next = next->next;
		ft_lstdelone(*lst, del);
		*lst = next;
	}
	lst = NULL;
}
