#include "libft.h"

char *ft_strdup(const char *string)
{
    char    *copy;
    size_t  len;

    len = ft_strlen(string);
    copy = malloc(sizeof(char) * (len + 1));
    if (!copy)
        return (NULL);

    ft_memcpy(copy, string, len);
    copy[len] = '\0';
    return (copy);
}
