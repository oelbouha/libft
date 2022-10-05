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

char **ft_split(char const *s, char c)
{
	char	**strings;
	int		i;
	int		k;
	int		j;

	if (!s)
		return (NULL);
	j = 0;
	i = 0;
	while (s[i])
	{
		while(s[i] == c)
			i++;
		if ( s[i] && s[i] != c)
			j++;
		while(s[i] && s[i] != c)
			i++;
	}
	strings = (char **)malloc( (j + 1) * sizeof(char *));
	if (!strings)
		return (NULL);
	i = 0;
	k = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		j = 0;
		while (s[i] && s[i] != c)
		{
			i++;
			j++;
		}
		if (s[i])
		{
			strings[k] = ft_substr(s, i - j, i);
			k++;
		}
	}
	strings[k] = NULL;
	return (strings);
}
// int main()
// {
// 	char **arr;
// 	arr = ft_split("**hello*hi*how***", '*');
// 	int i = 0;
// 	while (arr[i])
// 	{
// 		printf("%s\n", arr[i]);
// 		i++;
// 	}
// }


