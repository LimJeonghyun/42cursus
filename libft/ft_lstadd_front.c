#include "libft.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
    if (!lst || !new)
        return ;
    new->next = *lst;
    *lst = new;

    // lst ==  NULL -> 리스트 존재하지 않음
    // new == NULL ->추가할 리스트나 노드가 없dma
    // *lst == NULL, new != NULL : 추가할 노드가 있고 리스트는 존재하지만 첫번째 노드 존재하지 않음
}