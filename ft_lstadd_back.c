/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <oelbouha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 16:02:19 by oelbouha          #+#    #+#             */
/*   Updated: 2022/10/05 16:03:30 by oelbouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
    if (*lst)
    {
        while((*lst)->next != NULL)
        *lst = (*lst)->next;
        (*lst)->next = new;
        new->next = NULL;
    }
    else 
        *lst = new;
        new->next = NULL;
    
}
// int main(void)
// {
//     t_list *lst;
//     // t_list *node1;
//     // t_list *node2;
//     // t_list *node3;
//     //  t_list *last;

//     // char s[10] = "first";
//     // char s1[20] = "after first";
//     // char s2[20] = "before last";
//     // char s3[20] = "i am the last node";
//     // node1 = ft_lstnew(s);
//     // node2 = ft_lstnew(s1);
//     // node3 = ft_lstnew(s2);
//     // last  = ft_lstnew(s3);

//     // node1->next = node2;
//     // node2->next = node3;
//     // lst = node1;
//     // ft_lstadd_back(&lst, last);
//     // while (node1)
//     // {
//     //   printf("%s\n",node1->content);
//     //     node1 = node1->next;
//     // }

// }
