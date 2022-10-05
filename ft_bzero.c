/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <oelbouha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 09:40:34 by oelbouha          #+#    #+#             */
/*   Updated: 2022/09/30 16:36:18 by oelbouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void 	ft_bzero(void *b, size_t n)
{
	size_t		i;
	char		*str;


	str = (char *)b;
	i = 0;
	while(i < n)
	{
		str[i] = 0;
		i++;
	}
}
// int main()
// {
// 	char str[10] = "hello";
// 	printf("%s",ft_bzero(str, 4));
// 	//printf("%s", str);
// }
