/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <oelbouha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 09:38:16 by oelbouha          #+#    #+#             */
/*   Updated: 2022/10/07 20:48:47 by oelbouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (len == 0 || *little == 0)
		return ((char *)big);
	i = 0;
	while (big[i] && i < len)
	{
		j = 0;
		while ((i + j) < len && big[i + j] == little[j] && little[j])
			j++;
		if (little[j] == '\0')
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
// int main ()
// {
// 	char *s1 = "MZIRIBMZIRIBMZE123";
// //	char *s2 = "MZIRIBMZE";
// 	size_t max = strlen(s1) + 1;
// 	printf("%s\n", ft_strnstr(s1, s1, max));
// 	printf("%s\n", strnstr(s1, s1, max));
// 	return 0;
// }
