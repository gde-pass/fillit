/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-pass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 16:59:26 by gde-pass          #+#    #+#             */
/*   Updated: 2017/11/27 20:29:26 by gde-pass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t		min;
	size_t		max;
	size_t		len;

	if (!s)
		return (NULL);
	min = 0;
	max = ft_strlen(s);
	while (s[min] && (s[min] == ' ' || s[min] == '\t' || s[min] == '\n'))
		min++;
	while (min < max && (s[max - 1] == ' ' || \
				s[max - 1] == '\t' || s[max - 1] == '\n'))
		max--;
	if (min == max)
		return (ft_strnew(1));
	len = max - min;
	return (ft_strsub(s, min, len));
}
