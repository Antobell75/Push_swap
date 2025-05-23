/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbellar <anbellar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 15:08:54 by anso              #+#    #+#             */
/*   Updated: 2025/05/23 18:26:42 by anbellar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	start_algo(t_list **stack_a, t_list **stack_b, int lstsize)
{
	(void)stack_b;
	if (lstsize <= 3)
		sort_mini(stack_a);
	else
		return ;
}

int	check_good(t_list **stack_a)
{
	int		i;
	int		j;
	t_list	*lst;

	lst = *stack_a;
	while (lst->next)
	{
		i = lst->content;
		j = (lst->next)->content;
		if (i > j)
			return (0);
		lst = lst->next;
	}
	return (1);
}

void	sort_median(t_list **stack_a)
{
	int		i;
	int		j;
	t_list	*lst;

	lst = *stack_a;
	i = 0;
	while (lst)
	{
		lst->index = i++;
		lst = lst->next;
	}
	lst = *stack_a;
	while (lst)
	{
		j = 0;
		while (j < i)
		{
			if (lst->content == j)
				lst->median = j;
			j++;
		}
		lst = lst->next;
	}
}
