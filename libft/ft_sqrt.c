#include "libft.h"

int	ft_sqrt(int nb)
{
	int	res;

	res = 1;
	if (nb <= 0)
		return (0);
	while (res * res <= nb && res <= 46340)
	{
		if (res * res == nb)
			return (res);
		res++;
	}
	return (res - 1);
}