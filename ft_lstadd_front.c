/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <oelbouha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 12:43:24 by oelbouha          #+#    #+#             */
/*   Updated: 2022/10/05 12:47:37 by oelbouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
    new->next = *lst;
    *lst = new;
} 
// int main (void)
// {
//     t_list *lst;
//     t_list *node1; 
//     t_list *node0; 
//     char s[10] = "hello";
//     char d[10] = "world";    
//     node1 = ft_lstnew(s);
//     node0 = ft_lstnew(d);
//     lst = node1;
//     ft_lstadd_front (&lst, node0);
//       while ( lst != NULL)
//       {
//         printf("%s \n", lst->content);
//         lst = lst->next;
//       } 
// }
