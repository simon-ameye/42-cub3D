/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trobin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 10:48:21 by trobin            #+#    #+#             */
/*   Updated: 2021/09/21 16:38:25 by trobin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dest, char *src, int n)
{
	if (dest && src)
	{
		ft_memcpy(dest, src, n - 1);
		dest[n - 1] = '\0';
		return (dest);
	}
	return (0);
}
