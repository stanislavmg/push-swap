/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoremyk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 16:47:34 by sgoremyk          #+#    #+#             */
/*   Updated: 2024/02/01 16:47:43 by sgoremyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_atoi(const char *str, int *data)
{
	int	sign;
	int	res;
	int	i;

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
	*data = res * sign;
	return (str + i);
}
