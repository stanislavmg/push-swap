#include "libft.h"

char *skip_spaces(const char *str)
{
	while (ft_isspace(*str))
		str++;
	return ((char *)str);
}

char	*ft_atoi(const char *str, int *data)
{
	int			sign;
	int			i;
	long long	res;

	i = 0;
	res = 0;
	sign = 1;
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
	if (res > INT_MAX || res < INT_MIN)
	{
		write(2, "Error\n", 6);
		exit(EXIT_FAILURE);
	}
	*data = res * sign;
	return ((char *)str + i);
}