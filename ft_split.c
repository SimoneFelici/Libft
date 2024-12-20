#include "libft.h"

char	**ft_split(const char *s, char c)
{
	char	**array;
	int	i;
	int	start;
	int	end;

	i = 0;
	while(s[i])
	{
		if (s[i] == c)
		{
			start = i;
			i++;
		}
		while(s[i] != c)
		{
			i++;
		}
		if (s[i] == c)
		{
			end = i;
			i++;
		}
	}
	array[1] = ft_substr(s, start, end - start + 1);
	return(array);
}
