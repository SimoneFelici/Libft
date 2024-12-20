/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfelici <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 18:12:14 by sfelici           #+#    #+#             */
/*   Updated: 2024/12/15 18:12:15 by sfelici          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	*s;
	size_t	size;
	size_t	i;

	s = ft_itoa(n);
	size = ft_strlen(s);
	i = 0;
	while (i < size)
	{
		write(fd, &s[i], 1);
		i++;
	}
}
