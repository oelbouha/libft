/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <oelbouha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 18:02:57 by oelbouha          #+#    #+#             */
/*   Updated: 2022/10/07 18:06:53 by oelbouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void    ft_lstdelone(t_list *lst, void (*del)(void *))
{
    if (lst && del)
    {
        del(lst->content);
            free(lst) ;
    }
}
// void    do_something(void *ptr)
// {
//     free(ptr);
// }
// int main(void)
// {
//     t_list *node1;
//     char *str = strdup("hello");
//     node1 = ft_lstnew(str);
//     ft_lstdelone(node1, do_something);
// }
