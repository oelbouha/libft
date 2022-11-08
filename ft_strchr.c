/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <oelbouha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 09:47:06 by oelbouha          #+#    #+#             */
/*   Updated: 2022/10/22 19:41:26 by oelbouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return ((char *) &s[i]);
		i++;
	}
	if (s[i] == c)
		return ((char *)&s[i]);
	return (NULL);
}
#include <stdio.h>
int main()
{
	printf("%s", ft_strchr("hello\0hello", '\0'));
}
