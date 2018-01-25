/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-pass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 13:45:19 by gde-pass          #+#    #+#             */
/*   Updated: 2017/12/01 15:04:03 by gde-pass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		length;

	length = ft_strlen(str);
	while (length != 0 && str[length] != (char)c)
		length--;
	if (str[length] == (char)c)
		return ((char *)&str[length]);
	return (NULL);
}
