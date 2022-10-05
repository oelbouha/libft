/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <oelbouha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 17:18:05 by oelbouha          #+#    #+#             */
/*   Updated: 2022/09/30 18:12:58 by oelbouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *str1, const void *str2, size_t n)
{
	char	*dst;
	char	*src;

	if (str1 == 0 && str2 == 0)
		return (0);
	dst = (char *)str1;
	src = (char *)str2;

	if (src < dst)
	{
		while (n--)
			dst[n] = src[n];
	}
	else 
		ft_memcpy(str1, str2, n);
	return (dst);
}
// int main(void)
// {
// 	char str[20] = "old string";
// 	char str1[11] = "string";
// 	char s[20] = "old string";
// 	char s1[11] = "string";
// 	printf("%s\n", ft_memmove(str + 2, str1, 5));
// 	printf("%s", memmove(s + 2, s1, 5));
// }
