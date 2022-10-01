/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <oelbouha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 09:48:15 by oelbouha          #+#    #+#             */
/*   Updated: 2022/09/30 09:48:16 by oelbouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
#include <stdio.h>
int main(int c, char **v)
{
	printf("%d", ft_strlen(v[1]));
}
