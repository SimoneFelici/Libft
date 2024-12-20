#include "libft.h"

int	count_words(char const *s, char c)
{
	int	count;
	int	w;

	count = 0;
	w = 0;
	while(*s)
	{
		if (*s != c && count == 0)
		{
			w++;
			count = 1;
		}
		else if (*s == c)
			count = 0;
		s++;

	}
	return (w);
}

char	**ft_split(char const *s, char c)
{
	int	words;

	words = count_words(s, c);
}
