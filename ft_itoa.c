/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <oelbouha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 12:36:37 by oelbouha          #+#    #+#             */
/*   Updated: 2022/10/04 16:34:19 by oelbouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int intlen(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		i = 1;
	if (n < 0)
		i = 1;
	while(n)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char * ft_itoa(int n)
{
	int				i;
	int				len;
	unsigned int	nb;
	char			*str;
	
	len = intlen(n);
	str = malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	if(n < 0)
	{
		nb = n * -1;
		str[0] = '-';
	}
	else 
		nb = n;
 	i = len - 1;
	if (nb == 0)
		str[0] = '0';	
	while (nb > 0)
	{
		str[i] = nb % 10 + '0';
		nb = nb / 10;
		i--;
	}
	str[len] = '\0';
	return (str);			
}
int main()
{
	printf("%s", ft_itoa(-1000));
}
