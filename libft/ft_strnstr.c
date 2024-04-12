#include "libft.h"

int	ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!*little)
		return (0);
	if (!len && !big)
		return (0);
	while (big[i] && i < len)
	{
		j = 0;
		while (big[i + j] == little[j] && j + i < len)
		{
			j++;
			if (!little[j])
				return (1);
		}
		i++;
	}
	return (0);
}