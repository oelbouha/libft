/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <oelbouha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 13:00:42 by oelbouha          #+#    #+#             */
/*   Updated: 2022/10/05 13:21:47 by oelbouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int ft_lstsize(t_list *lst)
{
    int    size;

    size = 0;
    while (lst)
    {
        lst = lst->next;
        size++;
    }
    return (size);
}
// int main(void)
// {
//     t_list *lst;
//     t_list *node1;
//     t_list *node2;
//     t_list *node3;
// 	char s[10] = "hello";
// 	char d[10] = "sec";
// 	char k[10] = " last";
//     node1 = ft_lstnew(s);
//     node2 = ft_lstnew(d);
//     node3 = ft_lstnew(k);
//     node1->next = node2;
// 	node2->next = node3;
//     lst = node1;
//     printf("%d",ft_lstsize(lst));
// }
