/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 11:19:27 by oelbouha          #+#    #+#             */
/*   Updated: 2022/09/29 13:22:30 by oelbouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char *	ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while(s[i])
	{
	   if (s[i] == c)
		   return ((char*)&s[i]);
		i++;
	}
	return(NULL);
}
int main(void)
{
	char str[10] = "wwwhello";
	printf("%s", ft_strchr(str, 'h'));
	return (0);
}
