/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <oelbouha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 09:51:20 by oelbouha          #+#    #+#             */
/*   Updated: 2022/09/30 09:51:30 by oelbouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


char	*ft_strlcpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
#include <stdio.h>
int main()
{
	char dst[10] = "hi";
	char src[20] = "hello";
	printf("%s", ft_strlcpy(dst, src, 9));
	return (0);
}
