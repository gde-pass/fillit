/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-pass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 19:17:35 by gde-pass          #+#    #+#             */
/*   Updated: 2017/11/22 19:32:23 by gde-pass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t			i;
	char			*fresh;
	unsigned int	j;

	j = 0;
	i = 0;
	if (!s || !f)
		return (NULL);
	fresh = (char *)malloc(sizeof(*fresh) * (ft_strlen(s) + 1));
	if (fresh)
	{
		while (s[i])
		{
			fresh[i] = (*f)(j, s[i]);
			j++;
			i++;
		}
		fresh[i] = '\0';
	}
	return (fresh);
}
