/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 16:43:39 by oelbouha          #+#    #+#             */
/*   Updated: 2022/09/28 16:51:59 by oelbouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void * ft_memcpy(void * dst, const void * src, size_t n)
{
	int	i;
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	i = 0;
	while(i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}
int main()
{
	char str[10] = "hello";
	char str1[10] = "hi";
	printf("%s", ft_memcpy(str1, str, 3));
}
