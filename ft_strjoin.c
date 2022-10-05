/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <oelbouha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 18:43:43 by oelbouha          #+#    #+#             */
/*   Updated: 2022/09/30 20:19:39 by oelbouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*New_str;
	int		i;
	int		j;
	int		size;

	if (!s1 || !s2)
		return (0);
	i = strlen(s1);
	j = strlen(s2);
	size = i + j + 1;
	New_str = malloc (size * sizeof(char));
	if (!New_str)
		return (NULL);
	i = 0;
	while(s1[i])
	{
		New_str[i] = s1[i];
		i++;
	}
	j = 0;
	while(s2[j])
	{
		New_str[i] = s2[j];
		i++;
		j++;
	}
	New_str[i] = '\0';
	return (New_str);
}
// int main (int c, char **v)
// {
// 	printf("%s", ft_strjoin(v[1], v[2]));
// 	return 0;
// }
		
		


