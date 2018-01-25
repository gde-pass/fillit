/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intlength.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-pass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 16:09:10 by gde-pass          #+#    #+#             */
/*   Updated: 2017/11/24 16:12:32 by gde-pass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_intlength(int n)
{
	int length;

	if (n == -2147483648)
		return (11);
	length = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n = -n;
		length++;
	}
	while (n)
	{
		n = n / 10;
		length++;
	}
	return (length);
}
