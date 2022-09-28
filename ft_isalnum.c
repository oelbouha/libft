/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 15:07:04 by oelbouha          #+#    #+#             */
/*   Updated: 2022/09/28 15:07:25 by oelbouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isalpha(int s)
{
		if (!((s >= 'a' && s <= 'z') || (s >= 'A' && s <= 'Z') || (s >= 0 && s <= 9)))
				return (0);
		else
			return (1);
}
int main()
{
	printf("%d", ft_isalpha('h'));
}
