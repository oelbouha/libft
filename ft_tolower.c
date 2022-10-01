/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <oelbouha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 09:49:12 by oelbouha          #+#    #+#             */
/*   Updated: 2022/09/30 09:49:14 by oelbouha         ###   ########.fr       */
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
