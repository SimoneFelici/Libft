/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfelici <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 19:19:47 by sfelici           #+#    #+#             */
/*   Updated: 2024/12/10 19:19:49 by sfelici          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*find;

	find = NULL;
	while (*s)
	{
		if (*s == c)
			find = (char *)s;
		s++;
	}
	if (*s == c)
		find = (char *)s;
	return (find);
}
