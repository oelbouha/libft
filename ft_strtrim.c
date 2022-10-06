/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <oelbouha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 09:37:50 by oelbouha          #+#    #+#             */
/*   Updated: 2022/10/03 19:01:30 by oelbouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strtrim(char const *s1, char const *set)
{
    char       *str;
    int        i;
    int        j;
    int       s1_len;
    int      str_len;

    if (!s1)
        return (0);
    s1_len = strlen(s1);
    i = 0;
    while (s1_len-- && (ft_strchr(set, *s1)))
        s1++;
    j = 0;
    while ((j < s1_len) && ft_strchr(set ,s1[s1_len - j]))
		j++;
    str_len = ft_strlen(s1) - j;
    str = ft_substr(s1,  0, str_len);
    return (str);
}
// int main() {
//     char v1[40] = "hhhhhHello \t  Please\n Trim me !hhhh";
//     char v2[20] = "h";
//     printf("%s", ft_strtrim(v1, v2));
//     return 0;
// }

