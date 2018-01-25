/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-pass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 17:45:11 by gde-pass          #+#    #+#             */
/*   Updated: 2017/11/22 18:15:40 by gde-pass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t	i;
	char	*fresh;

	i = 0;
	if (!s || !f)
		return (NULL);
	fresh = (char *)malloc(sizeof(*fresh) * (ft_strlen(s) + 1));
	if (fresh)
	{
		while (s[i])
		{
			fresh[i] = (*f)(s[i]);
			i++;
		}
		fresh[i] = '\0';
	}
	return (fresh);
}
