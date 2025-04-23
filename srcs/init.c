/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbellar <anbellar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 15:08:54 by anso              #+#    #+#             */
/*   Updated: 2025/04/23 23:21:28 by anbellar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	start_algo(t_list **stack_a, t_list **stack_b, int lstsize)
{
	if (lstsize <= 3)
		sort_mini(stack_a);
	else
		pb(stack_a, stack_b);
	// 	big_algo(stack_a, stack_b);
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

void	check_b_bigger_a(t_list **stack_a, t_list **stack_b, t_data *data)
{
	t_list	*lst_a;
	t_list	*lst_b;

	lst_a = *stack_a;
	lst_b = *stack_b;
	while (lst_a)
	{
		if (lst_b->content > lst_a->content)
			lst_a = lst_a->next;
		else
			return ;
	}
	data->good_index_a = 0;
}