/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-pass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 17:14:48 by gde-pass          #+#    #+#             */
/*   Updated: 2017/11/20 17:33:10 by gde-pass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char *cast_s1;
	const unsigned char *cast_s2;

	if (s1 == s2 || n == 0)
		return (0);
	cast_s1 = (unsigned char *)s1;
	cast_s2 = (unsigned char *)s2;
	while (n--)
	{
		if (*cast_s1 != *cast_s2)
			return (*cast_s1 - *cast_s2);
		if (n)
		{
			cast_s1++;
			cast_s2++;
		}
	}
	return (0);
}
