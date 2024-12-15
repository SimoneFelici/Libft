#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t count)
{
    char        *d;
    const char  *s;

    if (!dest || !src)
        return NULL;

    d = (char *)dest;
    s = (const char *)src;

    while (count--)
        *d++ = *s++;
    return (dest);
}
