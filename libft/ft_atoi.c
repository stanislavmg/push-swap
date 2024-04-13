#include "libft.h"

char	*ft_atoi(const char *str, int *data)
{
	int			sign;
	int			i;
	long long	res;

	i = 0;
	res = 0;
	sign = 1;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (ft_isdigit(str[i]))
	{
		res *= 10;
		res += str[i] - '0';
		i++;
	}
	while (ft_isspace(str[i]))
		i++;
	if (res > INT_MAX || res < INT_MIN)
	{
		write(2, "Error\n", 6);
		exit(EXIT_FAILURE);
	}
	*data = res * sign;
	return ((char *)str + i);
}