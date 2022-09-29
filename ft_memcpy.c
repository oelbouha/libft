/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 16:43:39 by oelbouha          #+#    #+#             */
/*   Updated: 2022/09/29 18:59:52 by oelbouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
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
	return (d);
}
int main(int c, char **v)
{
	char str[10] = "hello";
	char str1[10] = "hi";
	printf("%s\n", ft_memcpy(v[1], v[2], 3));
	printf("%s", memcpy(v[3], v[4], 3));
}