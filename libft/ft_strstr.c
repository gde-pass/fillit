/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-pass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 19:49:02 by gde-pass          #+#    #+#             */
/*   Updated: 2017/11/22 15:57:07 by gde-pass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int	i;
	int	length;
	int j;

	i = 0;
	length = ft_strlen(needle);
	j = 0;
	if (length == 0)
		return ((char *)haystack);
	while (haystack[i])
	{
		while (needle[j] == haystack[j + i])
		{
			if (j == length - 1)
				return ((char *)haystack + i);
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}
