/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <oelbouha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 09:47:06 by oelbouha          #+#    #+#             */
/*   Updated: 2022/09/30 09:47:10 by oelbouha         ###   ########.fr       */
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
