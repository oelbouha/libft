/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <oelbouha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 16:02:23 by oelbouha          #+#    #+#             */
/*   Updated: 2022/10/04 16:44:54 by oelbouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *str, int fd)
{
	int	i;

	i = 0;
	if (str)
	{
		while(str[i])
		{
			write(fd, &str[i], 1);
			i++;
		}
	}
	write(fd, "\n", 2);
}
// int main(int c, char **v)
// {
// 	int fd = open("putstr.h", O_RDWR | O_CREAT);
// 	ft_putend_fd(v[1], fd);
// 	close(fd);
// }
