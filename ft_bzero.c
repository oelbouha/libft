/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 16:23:08 by oelbouha          #+#    #+#             */
/*   Updated: 2022/09/28 16:41:54 by oelbouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_bzero(void *b, size_t n)
{
	int	i;
	unsigned char	*str;

	str = (unsigned char *)b;
	i = 0;
	while(i < n)
	{
		str[i] = 'h';
		i++;
	}
}
int main()
{
	char str[10] = "hello";
	ft_bzero(str, 4);
	printf("%s", str);
}
