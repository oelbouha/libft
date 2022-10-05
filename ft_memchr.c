/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <oelbouha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 09:45:14 by oelbouha          #+#    #+#             */
/*   Updated: 2022/09/30 09:45:16 by oelbouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void * ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*s;

	s = (unsigned char *)str;
	while(n > 0)
	{
	   if (*s == (unsigned char)c)
		   return (s);
		s++;
		n--;
	}
	return(NULL);
}
// int main(void)
// {
// 	char str[10] = "whello";
// 	printf("%s", ft_memchr(str, 'h', 4));
// }
