/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <oelbouha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 09:45:57 by oelbouha          #+#    #+#             */
/*   Updated: 2022/09/30 12:35:06 by oelbouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
void * ft_memcpy(void * dst, const void * src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	while(n > 0)
	{
		*d = *s;
		d++;
		s++;
		n--;
	}
	return (dst);
}
int main(int c, char **v)
{
	char str[10] = "hello";
	char str1[10];
	printf("%s\n", ft_memcpy(str1, str, 3));
	//printf("%s", memcpy(v[3], v[4], 3));
}
