/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfelici <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 17:57:58 by sfelici           #+#    #+#             */
/*   Updated: 2024/12/15 18:05:43 by sfelici          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char		*d;
	const char	*s;

	d = (char *)dest;
	s = (const char *)src;
	if (dest < src)
	{
		while (len-- > 0)
			*d++ = *s++;
	}
	else
	{
		while (len-- > 0)
			d[len] = s[len];
	}
	return (dest);
}
