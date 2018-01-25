/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-pass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 20:50:47 by gde-pass          #+#    #+#             */
/*   Updated: 2017/11/24 16:08:47 by gde-pass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_itoa(int n)
{
	char	*str;
	size_t	length;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	length = ft_intlength(n) + 1;
	if (!(str = (char *)malloc(sizeof(char) * length)))
		return (NULL);
	if (n == 0)
		str[0] = '0';
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	str[length - 1] = '\0';
	while (n)
	{
		length--;
		str[length - 1] = (n % 10) + '0';
		n = n / 10;
	}
	return (str);
}
