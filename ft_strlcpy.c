#include "libft.h"
#include <string.h>
#include <stdio.h>

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t i = 0;
    size_t src_len = ft_strlen(src);
    
    if (size == 0)
    	return src_len;
    while (i < size - 1 && src[i] != '\0') {
    	dst[i] = src[i];
    	i++;
    }
    if (size > 0)
    	dst[i] = '\0';
    return src_len;
}
