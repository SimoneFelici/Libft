#include "libft.h"

void ft_putendl_fd(char *s, int fd)
{
	size_t	size;
	size_t	i;

	size = ft_strlen(s);
	i = 0;
	while(i < size)
	{
		write(fd, &s[i], 1);
		i++;
	}
	write(fd, "\n", 1);
}
