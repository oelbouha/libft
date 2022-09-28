/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 15:16:45 by oelbouha          #+#    #+#             */
/*   Updated: 2022/09/28 15:17:20 by oelbouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int s)
{
	if (s >= 0 && s <= 9)
		return (1);
	else
		return (0);
}
int main()
{
	printf("%d", ft_isdigit('g'));
}
