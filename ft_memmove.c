/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <oelbouha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 17:18:05 by oelbouha          #+#    #+#             */
/*   Updated: 2022/10/23 18:04:20 by oelbouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*dest;
	char	*source;

	if (dst == 0 && src == 0)
		return (0);
	dest = (char *)dst;
	source = (char *)src;
	if (source > dest)
		ft_memcpy(dst, src, n);
	else
	{
		while (n > 0)
		{
			dest[n - 1] = source[n - 1];
			n--;
		}
	}
	return (dst);
}
#include <stdio.h>
int main(void)
{
	char str[15] = "hellofuture13";
	printf("%s", ft_memmove(str + 4, str + 1, 4));
}
