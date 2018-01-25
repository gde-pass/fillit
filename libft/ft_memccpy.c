/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-pass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 14:07:30 by gde-pass          #+#    #+#             */
/*   Updated: 2017/12/01 14:28:13 by gde-pass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*destc;
	unsigned char	*srcc;
	size_t			i;

	i = 0;
	destc = (unsigned char *)dest;
	srcc = (unsigned char *)src;
	while (i < n)
	{
		destc[i] = srcc[i];
		if (destc[i] == (unsigned char)c)
			return (destc + i + 1);
		i++;
	}
	return (NULL);
}
