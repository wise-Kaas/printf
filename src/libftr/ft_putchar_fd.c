/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhaenys <rrhaenys@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 21:24:18 by rrhaenys          #+#    #+#             */
/*   Updated: 2019/01/12 21:27:26 by rrhaenys         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(int c, int fd)
{
	char	ds[4];

	if (c < 0x80)
		write(fd, &c, 1);
	else
	{
		if (c >= 0x00000800)
		{
			ds[2] = 0x80 | (c & 0x3F);
			ds[1] = 0x80 | ((c >> 6) & 0x3F);
			ds[0] = 0xE0 | ((c >> 12) & 0xF);
			write(1, ds, 3);
		}
		else if (c >= 0x00000080)
		{
			ds[1] = 0x80 | (c & 0x3F);
			ds[0] = 0xC0 | ((c >> 6) & 0x1F);
			write(1, ds, 2);
		}
	}
}