/* *****************************************************	else if (len > 10)
		ft_error("too large");******************* */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbellar <anbellar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 16:15:03 by anbellar          #+#    #+#             */
/*   Updated: 2025/05/23 17:09:45 by anbellar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_error(char *msg)
{
	ft_printf("Error: %s\n", msg);
	exit(1);
}

void	check_double(char **str)
{
	int	i;
	int	j;

	i = 0;
	if (str[0][0] == '\0')
		ft_error("empty input");
	while (str[i])
	{
		j = i + 1;
		while (str[j])
		{
			if (ft_strcmp(str[i], str[j]) == 0)
				ft_error("duplicates");
			j++;
		}
		i++;
	}
}

void	check_maxint(char *str)
{
	int	len;
	int	sign;
	int	neg;

	sign = 0;
	neg = 0;
	if (str[0] == '-' || str[0] == '+')
		sign = 1;
	if (str[0] == '-')
		neg = 1;
	len = ft_strlen(str + sign);
	if (len < 10)
		return ;
	else	if (len > 10)
		ft_error("number exceeds integer limits");
	else
	{
		if (neg == 1 && ft_strcmp("2147483648", str + sign) < 0)
			ft_error("below INT_MIN");
		else if (ft_strcmp("2147483647", str) < 0)
			ft_error("above INT_MAX");
	}
}

void	check_sign(char *str)
{
	int	sign;

	sign = 0;
	while (*str)
	{
		if (*str == '-' || *str == '+')
			sign++;
		str++;
	}
	if (sign > 1)
		ft_error("multiple signs");
}

void	check_error(char **str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		j = 0;
		while (str[i][j] == '0' && str[i][j + 1] == '0')
			j++;
		check_maxint(str[i] + j);
		check_sign(str[i] + j);
		i++;
	}
	check_double(str);
}
