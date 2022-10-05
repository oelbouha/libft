/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <oelbouha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 18:22:27 by oelbouha          #+#    #+#             */
/*   Updated: 2022/10/04 11:10:04 by oelbouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_str;
	unsigned int		i;
	unsigned int		s_len;

	s_len = ft_strlen(s);
	if (!s)
		return (NULL);
	if (start > s_len)
		 return (0);
	sub_str = malloc (len - start + 1);
	if (!sub_str)
		return (NULL);
	i = 0;
	while (start < len)
	{
		sub_str[i] = s[start];
		start++;
		i++;
	}
	sub_str[i] = '\0';
	return (sub_str);
}
// int main(int c, char **v)
// {
// 	printf("%s", ft_substr(v[1], 30, 10));
// }
