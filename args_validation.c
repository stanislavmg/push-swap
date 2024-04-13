#include "push_swap.h"

int	check_str(char *str, int *count)
{
	int	i;

	i = 0;
	while (str[i])
	{
		/* Check alphabetical symbols */
		if (ft_isalpha(str[i]))
			return (1);
		/* Check double sign */
		if ((str[i] == '+' || str[i] == '-')
			&& (str[i + 1] == '+' || str[i + 1] == '-'))
			return (1);
		/* Check sign without digit */
		if ((str[i] == '+' || str[i] == '-') && !ft_isdigit(str[i + 1]))
			return (1);
		/* Count numbers */
		if (ft_isdigit(str[i]))
		{
			(*count)++;
			while (ft_isdigit(str[i]))
				i++;
			continue ;
		}
		i++;
	}
	return (0);
}

int	valid_args(int argc, char **argv, int *count, int **arr)
{
	int	i;

	if (argc < 2 || !argv)
		return (-1);
	i = 1;
	while (i < argc)
	{
		if (check_str(argv[i], count))
			return (1);
		i++;
	}
	*arr = create_array(argc, argv, *count);
	if (check_duplicate(*arr, *count))
		return (1);
	return (0);
}

int	check_duplicate(int	*arr, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (arr[i] == arr[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}