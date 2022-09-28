/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 16:03:37 by oelbouha          #+#    #+#             */
/*   Updated: 2022/09/28 16:19:02 by oelbouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void *	ft_memset(void *b, int c, size_t len)
{
	int	i;
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
int main(int c, char **v)
{
	printf("%s", ft_memset(v[1], 'h', 10));
}

