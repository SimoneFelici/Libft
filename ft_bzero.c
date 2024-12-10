/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfelici <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 19:17:06 by sfelici           #+#    #+#             */
/*   Updated: 2024/12/10 19:17:08 by sfelici          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *)s)[i++] = '\0';
	}
}
/*
int	main()
{
	char s[] = "ciaociao";
	printf("Prima: %s\n", s);
	ft_bzero(s, 4);
	printf("Dopo bzero: ");
	for (size_t i = 0; i < sizeof(s); i++) {
		if (s[i] == '\0')
			printf("\\0 ");
		else
			printf("%c ", s[i]);
	}
	printf("\n");
	return 0;
}
*/
