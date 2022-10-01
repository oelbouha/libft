/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <oelbouha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 09:48:47 by oelbouha          #+#    #+#             */
/*   Updated: 2022/09/30 09:48:48 by oelbouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
char *	ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while(s[i])
		i++;
	i--;
	while(i >= 0)
	{
	   if (s[i] == c)
		   return ((char*)&s[i]);
		i--;
	}
	return(NULL);
}
int main(void)
{
	char str[100] = "wwwhellohiii";
	printf("%s", ft_strrchr(str, 'h'));
	return (0);
}
