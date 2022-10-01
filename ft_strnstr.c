/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <oelbouha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 09:38:16 by oelbouha          #+#    #+#             */
/*   Updated: 2022/09/30 09:38:35 by oelbouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *	ft_strnstr(const char *big, const char *little, size_t len)
{
	int	i;
	int	j;

	if (little == 0)
		return ((char*)big);
	i = 0;
	while (big[i] && i < len)
	{
		j = 0;
		while(big[i + j] == little[j])
			j++;
			if (little[j] == '\0')
				return ((char*)&big[i]);
		i++;
	}
	return (NULL);
}
int main (int c, char **v)
{
	if (c == 3)
	{
	printf("%s\n", ft_strnstr(v[1], v[2], 10));
	return 0;
	}
}
