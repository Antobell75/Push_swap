/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_libft.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbellar <anbellar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 15:10:40 by anbellar          #+#    #+#             */
/*   Updated: 2025/05/23 17:18:33 by anbellar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	if (s1[i] == '+' || s1[i] == '-')
		i++;
	if (s2[j] == '+' || s2[j] == '-')
		j++;
	while ((s1[i] == '0'))
		i++;
	while ((s2[j] == '0'))
		j++;
	while (s1[i] && s2[j] && (s1[i] == s2[j]))
	{
		j++;
		i++;
	}
	return (s1[i] - s2[j]);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	isspaces(char n)
{
	if (n == ' ' || n == '\f' || n == '\n'
		|| n == '\r' || n == '\t' || n == '\v')
		return (1);
	return (0);
}

int	isnbr(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int	result;
	int	sign;
	int	i;

	result = 0;
	sign = 1;
	i = 0;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			ft_error("not a number");
		result *= 10;
		result += str[i] - '0';
		i++;
	}
	result *= sign;
	return (result);
}
