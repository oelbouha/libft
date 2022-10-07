/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <oelbouha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 17:18:05 by oelbouha          #+#    #+#             */
/*   Updated: 2022/10/06 19:47:54 by oelbouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	char	*dst;
	char	*src;

	if (str1 == 0 && str2 == 0)
		return (0);
	dst = (char *)str1;
	src = (char *)str2;
	if (src < dst)
	{
		while (n > 0)
		{
			dst[n - 1] = src[n - 1];
			n--;
		}
	}
	else
		ft_memcpy(str1, str2, n);
	return (dst);
}
// int main ()
// {
// 	char s1[] = "123456789"; 
// 	printf("%s", ft_memmove(s1 +4 , s1, 5 ));
// 	return 0;
// }