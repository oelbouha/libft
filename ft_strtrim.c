/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <oelbouha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 09:37:50 by oelbouha          #+#    #+#             */
/*   Updated: 2022/10/03 19:01:30 by oelbouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		i;
	int		j;
	int		set_len;
	int		s1_len;
	int		str_len;

	s1_len = strlen(s1);
	set_len = strlen(set);
	i = 0;
	while (i < s1_len)
	{
		if (ft_strchr(set, s1[i]) == 0)
			break;
		else
			i++;
	}
	j = 0;
	while (j < s1_len)
	{
		if (!(ft_strchr(set ,s1[s1_len - j - 1])))
			j++;
		else
			break;
	}
	str_len = s1_len - i - j + 1;
	str = malloc(str_len * sizeof(char));
	if (!str)
		return (NULL);
	str = ft_substr(s1,  i, s1_len - j);
	return (str);
}
// int main (int c, char **v)
// {
// 	printf("%s", ft_strtrim(v[1], v[2]));
// 	return 0;
// }

