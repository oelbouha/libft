/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <oelbouha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 09:46:27 by oelbouha          #+#    #+#             */
/*   Updated: 2022/09/30 09:46:40 by oelbouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void *	ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*str;

	str = (unsigned char *)b;
	i = 0;
	while(i < len)
	{
		str[i] = c;
		i++;
	}
	return (str);
}
// int main(int c, char **v)
// {
// 	printf("%s", ft_memset(v[1], 'h', 10));
// }

