#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*find;

	find = NULL;
	while (*s != '\0')
	{
		if (*s == c)
			find = (char *)s;
		s++;
	}
	if (*s == c)
		find = (char *)s;
	return (find);
}
