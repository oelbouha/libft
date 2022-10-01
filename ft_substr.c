/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <oelbouha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 18:22:27 by oelbouha          #+#    #+#             */
/*   Updated: 2022/09/30 18:41:48 by oelbouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_str;
	int		i;
	int		size;

	size = len - start + 1;
	sub_str = malloc (size * sizeof(char));
	if (!sub_str)
		return (NULL);
	i = 0;
	while (start < len)
	{
		sub_str[i] = s[start];
		start++;
		i++;
	}
	sub_str[i] = '\0';
	return (sub_str);
}
int main(int c, char **v)
{
	printf("%s", ft_substr(v[1], 5, strlen(v[1])));
			return 0;
}

