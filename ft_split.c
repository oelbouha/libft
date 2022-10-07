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
	int		k;
	int		j;

	if (!s)
		return (NULL);
	strings = (char **)malloc ((ft_count(s, c) + 1) * sizeof(char *));
	if (!strings)
		return (NULL);
	i = 0;
	k = -1;
	while (++k < ft_count(s, c))
	{
		while (s[i] && s[i] == c)
			i++;
		j = 0;
		while (s[i] && s[i] != c)
		{
			i++;
			j++;
		}
		strings[k] = ft_substr(s, i - j, j);
	}
	strings[k] = NULL;
	return (strings);
}
// int main()
// {
// 	char **arr;
// 	arr = ft_split("split  ||this|for|me|", '|');
// 	int i = 0;
// 	while (arr[i])
// 	{
// 		printf("%s\n", arr[i]);
// 		i++;
// 	}
// }