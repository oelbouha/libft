/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <oelbouha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 19:06:52 by oelbouha          #+#    #+#             */
/*   Updated: 2022/10/03 15:43:51 by oelbouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
// int main (void)
// {
// 	int fd = open ("file4.h",  O_RDWR | O_CREAT);
// 	 ft_putchar_fd('c', fd);
// 	close(fd);
// }