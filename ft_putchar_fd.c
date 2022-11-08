/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <oelbouha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 19:06:52 by oelbouha          #+#    #+#             */
/*   Updated: 2022/10/16 18:54:45 by oelbouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
int main()
{
	int fd = open("file1", O_CREAT | O_RDWR);
	ft_putchar_fd('h', fd);
	printf("%d", fd);
	close(fd);
}
