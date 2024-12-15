#include "libft.h"

void *ft_memmove (void *dest, const void *src, size_t len)
{
	char	*d;
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
	return dest;
}
