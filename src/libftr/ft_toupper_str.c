/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper_str.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgyles <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/09 12:29:25 by rgyles            #+#    #+#             */
/*   Updated: 2019/01/09 12:29:54 by rgyles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_toupper_str(char *str)
{
	int index;

	index = -1;
	while (str[++index] != '\0')
		str[index] = ft_toupper(str[index]);
}