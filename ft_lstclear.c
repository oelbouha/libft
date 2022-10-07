/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <oelbouha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 18:57:24 by oelbouha          #+#    #+#             */
/*   Updated: 2022/10/07 19:01:19 by oelbouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void *))
{

    t_list  *node;
    node = (*lst);
    node = node->next  
        
    }
}
void    do_something(void *ptr)
{
    free(ptr);
}
int main(void)
{
    t_list *lst;
    t_list *node1;
    t_list *node2;

    char *str = strdup("hello");
    char *str1 = strdup("world");

    node1 = ft_lstnew(str);
    node2 = ft_lstnew(str1);

    lst = node1;
    node1->next = node2;

    ft_lstclear(&lst, do_something);
}
