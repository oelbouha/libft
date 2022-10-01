/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <oelbouha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 09:41:27 by oelbouha          #+#    #+#             */
/*   Updated: 2022/09/30 09:41:49 by oelbouha         ###   ########.fr       */
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
