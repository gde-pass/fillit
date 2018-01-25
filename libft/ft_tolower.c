/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-pass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 13:39:18 by gde-pass          #+#    #+#             */
/*   Updated: 2017/11/16 16:00:41 by gde-pass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_tolower(int c)
{
	int		error;

	error = c;
	if ((c >= 'A') && (c <= 'Z'))
	{
		c = c + 32;
		return (c);
	}
	else
		return (error);
}
