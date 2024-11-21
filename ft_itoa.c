#include "libft.h"

int	find_size(int n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		count++;
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

int	find_decimals(int size)
{
	int	dec;
	int	i;

	dec = 1;
	i = 0;
	while (i < size - 1)
	{
		dec *= 10;
		i++;
	}
	return (dec);
}

static void	fill_digits(int n, char *nbr, int decs, int *i)
{
	while (decs > 0)
	{
		nbr[(*i)++] = (n / decs) + '0';
		n %= decs;
		decs /= 10;
	}
}

char	*ft_itoa(int n)
{
	char	*nbr;
	int		size;
	int		i;
	int		decs;

	if (n == -2147483648)
		return ("-2147483648");
	size = find_size(n);
	nbr = malloc((size + 1) * sizeof(char));
	if (!nbr)
		return (NULL);
	i = 0;
	decs = find_decimals(size - (n < 0));
	if (n < 0)
	{
		nbr[i++] = '-';
		n = -n;
	}
	fill_digits(n, nbr, decs, &i);
	nbr[i] = '\0';
	return (nbr);
}
