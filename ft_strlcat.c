/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <oelbouha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 09:52:18 by oelbouha          #+#    #+#             */
/*   Updated: 2022/10/03 18:47:05 by oelbouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t		i;
	size_t		j;
	size_t		dest_len;

	if (size == 0)
		return (ft_strlen(src));
	dest_len = ft_strlen(dest);
	i = ft_strlen(dest);
	j = 0;
	while (src[j] && i < size -1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	if (size < dest_len)
	{
		return (ft_strlen(src) + size);
	}
	else
		return (dest_len + ft_strlen(src));
}
// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
// 	// char dst[10] = "hi";
// 	// char src[10] = "hello";
// 	// char d[10] = "hi";
// 	// char s[10] = "hello";
// 	printf("%zu\n", ft_strlcat((void *)0 ,"ryan !", 0));
// 	//printf("%lu\n", strlcat((void *)0,"ryan !", 0));
// 	//printf("%s", dst);
// }