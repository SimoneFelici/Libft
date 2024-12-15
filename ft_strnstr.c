#include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t i;
    size_t j;

    if (*little == '\0')
        return ((char *)big);

    i = 0;
    while (i < len && big[i] != '\0')
    {
        if (big[i] == little[0])
        {
            j = 0;
            while (i + j < len && big[i + j] == little[j] && little[j] != '\0')
                j++;
            if (little[j] == '\0')
                return ((char *)(big + i));
        }
        i++;
    }
    return (0);
}