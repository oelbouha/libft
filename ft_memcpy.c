/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <oelbouha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 09:45:57 by oelbouha          #+#    #+#             */
/*   Updated: 2022/10/04 11:44:55 by oelbouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


void * ft_memcpy(void * dst, const void * src, size_t n)
{
	unsigned char	*dest;
	unsigned char	*source;

	if (dst == 0 && src == 0)
		return (0); 
	dest = (unsigned char *)dst;
	source = (unsigned char *)src;
	while(n > 0)
	{
		*dest = *source;
		dest++;
		source++;
		n--;
	}
	return (dst);
}
// int main(int c, char **v)
// {
// 	printf("%s\n", ft_memcpy(v[1], v[2], 10));
// 	printf("%s", memcpy(v[3], v[4], 10));
// }
