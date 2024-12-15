#include "libft.h"

void *ft_memchr(const void *buf, int c, size_t count)
{
	unsigned char	*src;
	unsigned char	chr;

	src = (unsigned char *)buf;
	chr = (unsigned char)c;
	while(count-- > 0)
	{
		if (*src == chr)
			return (src);
		src++;
	}
	return (NULL);
}