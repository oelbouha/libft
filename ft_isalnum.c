/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <oelbouha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 09:41:27 by oelbouha          #+#    #+#             */
/*   Updated: 2022/10/03 17:48:12 by oelbouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int s)
{
	if (!((s >= 'a' && s <= 'z') || (s >= 'A' && s <= 'Z')
			|| (s >= '0' && s <= '9')))
		return (0);
	else
		return (1);
}