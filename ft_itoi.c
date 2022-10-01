/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <oelbouha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 12:36:37 by oelbouha          #+#    #+#             */
/*   Updated: 2022/10/01 16:19:55 by oelbouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_itoa(int n)
{
	unsigned int	nb;
	unsigned int	i;
	char 			*str[12];

	if (n < 0)
	{
		str[0] = '-';
		nb = n * -1;
	}
	else 
		nb = n;
	i = 11;
	while (nb / 10)
	{
		str[i] = nb % 10 + 48;
		nb = nb / 10;
		i--;
	}
	str[i] = nb % 10 +  48;
	return (new_str);
}
int main(void)
{
	printf("%s", ft_itoa(100));
}
