/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-pass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 20:07:01 by gde-pass          #+#    #+#             */
/*   Updated: 2017/11/16 13:29:23 by gde-pass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	j;

	j = 0;
	while ((s1[j] || s2[j]) && (n > 0))
	{
		if (s1[j] == s2[j])
		{
			j++;
			n--;
		}
		else
			return ((unsigned char)s1[j] - (unsigned char)s2[j]);
	}
	return (0);
}
