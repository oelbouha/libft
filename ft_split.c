/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <oelbouha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 12:23:30 by oelbouha          #+#    #+#             */
/*   Updated: 2022/10/03 19:23:11 by oelbouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count(char const *s, char c)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] && s[i] != c)
			j++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (j);
}

char	**ft_split(char const *s, char c)
{
	char	**strings;
	int		i;
	int		x;
	int		j;

	if (!s)
		return (NULL);
	strings = (char **)malloc ((ft_count(s, c) + 1) * sizeof(char *));
	if (!strings)
		return (NULL);
	i = 0;
	x = -1;
	while (++x < ft_count(s, c))
	{
		while (s[i] && s[i] == c)
			i++;
		j = 0;
		while (s[i] && s[i] != c)
		{
			i++;
			j++;
		}
		strings[x] = ft_substr(s, i - j, j);
	}
	strings[x] = NULL;
	return (strings);
}
// int main(void)
// {
// 	char **arr;
// 	arr = ft_split("*****hello", '*');
// 	int i = 0;
// 	while (arr[i])
// 	{
// 		printf("%s\n", arr[i]);
// 		i++;
// 	}
// }