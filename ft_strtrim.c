/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <oelbouha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 09:37:50 by oelbouha          #+#    #+#             */
/*   Updated: 2022/10/01 12:15:59 by oelbouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *sub_str;
    int        i;
    int        size;

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

char *ft_strtrim(char const *s1, char const *set)
{
	char	*trimed_str;
	int		i;
	int		set_len;
	int		s1_len;

	s1_len = strlen(s1);
	set_len = strlen(set);
	i = 0;
	while (*s1 == *set)
	{
		i++;
		s1++;
		set++;
	}
	trimed_str = ft_substr(s1, i, (s1_len - set_len));
	return (trimed_str);
}
int main (int c, char **v)
{
	printf("%s", ft_strtrim(v[1], v[2]));
	return 0;
}

