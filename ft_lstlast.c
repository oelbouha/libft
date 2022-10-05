/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <oelbouha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 15:21:13 by oelbouha          #+#    #+#             */
/*   Updated: 2022/10/05 15:22:53 by oelbouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list 	*ft_lstlast(t_list *lst)
{
    if (lst)
    {
        while(lst->next != NULL)
            lst = lst->next;
    }
    return (lst);
}
// int main(void)
// {
//     t_list *lst;
//     t_list *node1;
//     t_list *node2;
//     t_list *node3;
//     t_list *last;

//     char s[10] = "hello";
//     char s1[10] = "world";
//     char s2[10] = "i am";

//     node1 = ft_lstnew(s);
//     node2 = ft_lstnew(s1);
//     node3 = ft_lstnew(s2);

//     node1->next = node2;
//     node2->next = node3;
//     lst = node1;
//     last = ft_lstlast(lst);
//       printf("%s",last->content);
// }

