/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 11:11:20 by oelbouha          #+#    #+#             */
/*   Updated: 2022/09/29 11:13:34 by oelbouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_tolower(int s)
{
		if (s >= 'A' && s <= 'Z')
			return (s + 32);
		else
			return (s);
}
int main()
{
	printf("%c\n", ft_tolower('H'));
	printf("%c\n", ft_tolower('b'));
	printf("%d", ft_tolower(1));
}
