/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <oelbouha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 09:49:41 by oelbouha          #+#    #+#             */
/*   Updated: 2022/10/04 11:21:27 by oelbouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int s)
{
		if (!(s >= 'a' && s <= 'z'))
			return (s);
		else 
			return (s - 32);
}
// int main(void)
// {
// 	printf("%c", ft_toupper('g'));
// }

