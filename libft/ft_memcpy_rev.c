/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy_rev.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-pass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 18:18:14 by gde-pass          #+#    #+#             */
/*   Updated: 2017/11/24 18:27:02 by gde-pass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy_rev(void *dest, const void *src, size_t len)
{
	unsigned char	*swap1;
	unsigned char	*swap2;

	swap1 = (unsigned char *)dest;
	swap2 = (unsigned char *)src;
	while (len--)
		swap1[len] = swap2[len];
	return (swap1);
}
