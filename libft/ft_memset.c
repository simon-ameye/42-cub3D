/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trobin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 14:32:05 by trobin            #+#    #+#             */
/*   Updated: 2021/09/21 16:39:01 by trobin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *addr, int value, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		*(char *)(addr + i) = (char)value;
		++i;
	}
	return (addr);
}
