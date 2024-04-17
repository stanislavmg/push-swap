#include "libft.h"

int	ft_log(int n)
{
	int	res;

	res = -1;
	if (n <= 0)
		return (0);
	while (n)
	{
		n /= 2;
		res++;
	}
	return (res);
}