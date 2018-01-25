/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-pass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 15:23:21 by gde-pass          #+#    #+#             */
/*   Updated: 2017/11/24 14:56:04 by gde-pass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strsplit_count(const char *str, const char c)
{
	size_t		count;

	count = 1;
	while (*str)
	{
		while (*str && *str == c)
			str++;
		if (*str)
		{
			count++;
			while (*str && *str != c)
				str++;
		}
	}
	return (count);
}

static void		*ft_strsplit_copy(const char *str, const char c)
{
	size_t	size;
	char	*new;

	size = 0;
	while (str[size] && str[size] != c)
		size++;
	new = malloc(size + 1);
	if (!new)
		return (NULL);
	while (*str && *str != c)
		*new++ = *str++;
	*new = 0;
	return (new - size);
}

char			**ft_strsplit(const char *s, char c)
{
	size_t			size;
	char			**new;

	if (!c || !s)
		return (NULL);
	size = ft_strsplit_count(s, c);
	new = malloc(sizeof(char*) * size);
	if (!new)
		return (NULL);
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			*new++ = ft_strsplit_copy(s, c);
			while (*s && *s != c)
				s++;
		}
	}
	*new = NULL;
	return (new - size + 1);
}
