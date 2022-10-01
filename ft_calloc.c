/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <oelbouha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 15:24:07 by oelbouha          #+#    #+#             */
/*   Updated: 2022/09/30 16:40:16 by oelbouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	*ft_calloc(size_t items, size_t size)
{
	char	*ptr;
	int		i;
	
	ptr = malloc (items * size);
	if (!ptr)
		return (NULL);
	 i = 0;
	 while(i < items * size)
	 {
		ptr[i] = 0;
	   i++;
	 }	   
	 return ((void *)ptr);
}
int main(void)
{
	ft_calloc(3, sizeof(int));
}
