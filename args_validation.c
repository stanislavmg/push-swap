#include "push_swap.h"

int	check_str(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (ft_isalpha(str[i]))
			return (1);
		if ((str[i] == '+' || str[i] == '-')
			&& (str[i + 1] == '+' || str[i + 1] == '-'))
			return (1);
		i++;
	}
	return (0);
}

int	valid_args(int argc, char **argv)
{
	int	i;

	if (argc < 2 || !argv)
		return (-1);
	i = 0;
	while (i < argc)
	{
		if (check_str(argv[i]));
			return (1);
		i++;
	}
	return (0);
}