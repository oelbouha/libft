/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <oelbouha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 09:51:20 by oelbouha          #+#    #+#             */
/*   Updated: 2022/10/03 18:47:49 by oelbouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dest, char *src, size_t n)
{
	size_t	i;
	size_t	j;

	j = ft_strlen(src);
	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (j);
}
/*
int main()
{
	char dst[20] ;
	char src[20] = "hello";
	printf("%zu", ft_strlcpy(dst, src, 9));
	return (0);
}*/
