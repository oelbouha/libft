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
	size_t		src_len;
	size_t		dest_len;

	src_len = ft_strlen(src);
	dest_len = ft_strlen(dest);
	i = ft_strlen(dest);
	j = 0;
	if (size == 0)
		return (src_len);
	while (src[j] && i < size -1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	if (size < dest_len)
	{
		return (src_len + size);
	}
	else
		return (dest_len + src_len);
}
/*
#include <stdio.h>
#include <string.h>
int main(void)
{
	char dst[10] = "hi";
	char src[10] = "hello";
	char d[10] = "hi";
	char s[10] = "hello";
	//printf("%d\n", ft_strlcat(dst, src, 5));
	//printf("%s\n", dst);
	//printf("%d\n", ft_strlcat(dst, src, 2));
	//printf("%s\n", dst);
	printf("%zu\n", ft_strlcat(dst, src, 4));
	printf("%lu\n", strlcat(d, s, 4));
	printf("%s", dst);
}*/
