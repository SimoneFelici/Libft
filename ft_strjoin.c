#include "libft.h"
#include <stdio.h>

char *ft_strjoin(char const *s1, char const *s2)
{
	char *string;
	int	i;

	i = 0;
	string = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	while(s1[i++] != '\0')
	{
		string[i] = s1[i];
	}
	i = 0;
	while(s2[i++] != '\0')
	{
		string[i] = s2[i];
	}
	string[i] = '\0';
	return string;
}
