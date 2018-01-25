/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-pass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 21:46:22 by gde-pass          #+#    #+#             */
/*   Updated: 2017/11/24 13:26:16 by gde-pass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	int		length;
	int		i;
	int		swap;

	i = 0;
	length = (ft_strlen(str) - 1);
	while (i <= length)
	{
		swap = str[i];
		str[i] = str[length];
		str[length] = swap;
		length--;
		i++;
	}
	return (str);
}
