#include "push_swap.h"

int	check_str(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		/*Check alphabetical symbols*/
		if (ft_isalpha(str[i]))
			return (1);
		/*Check double sign*/
		if ((str[i] == '+' || str[i] == '-')
			&& (str[i + 1] == '+' || str[i + 1] == '-'))
			return (1);
		/*Check sign without digit*/
		if ((str[i] == '+' || str[i] == '-') && !ft_isdigit(str[i + 1]))
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
	i = 1;
	while (i < argc)
	{
		if (check_str(argv[i]))
			return (1);
		i++;
	}
	return (0);
}