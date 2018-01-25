/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-pass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 13:46:16 by gde-pass          #+#    #+#             */
/*   Updated: 2017/12/01 14:29:52 by gde-pass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char *destc;
	char *srcc;

	if (n == 0 || dest == src)
		return (dest);
	destc = (char *)dest;
	srcc = (char *)src;
	while (--n)
		*destc++ = *srcc++;
	*destc = *srcc;
	return (dest);
}
