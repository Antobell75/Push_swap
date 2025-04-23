/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_algo.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbellar <anbellar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 13:14:55 by anso              #+#    #+#             */
/*   Updated: 2025/04/23 14:13:59 by anbellar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	big_algo(t_list **stack_a, t_list **stack_b)
{
	t_data	*data;

	pb(stack_a, stack_b);
	pb_sort(stack_a, stack_b);
}

void	find_index(t_list **stack_a, t_list **stack_b, t_data *data)
{
	int		i;
	t_list	*lst;

	
}

void	pb_sort(t_list **stack_a, t_list **stack_b)
{
	int		bigger;
	t_list	*lst;

	bigger = bigger_int(stack_a) / 2;
	while (ft_lstsize(stack_a) > 3)
	{
		lst = *stack_a;
		if (lst->content >= bigger)
			pb(stack_a, stack_b);
		else
		{
			pb(stack_a, stack_b);
			rb(stack_b);
		}
	}
}
