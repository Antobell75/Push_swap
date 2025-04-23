/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_algo.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbellar <anbellar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 13:14:55 by anso              #+#    #+#             */
/*   Updated: 2025/04/24 00:00:07 by anbellar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	big_algo(t_list **stack_a, t_list **stack_b)
{
	t_data	*data;

	data = NULL;
	pb_sort(stack_a, stack_b);
	while(ft_lstsize(stack_b) > 0)
	{
		put_index(stack_a, stack_b, data);
		find_index(stack_a, stack_b, data);
		exec_op(stack_a, stack_b, data);
		free(data);
	}
}

void	find_index(t_list **stack_a, t_list **stack_b, t_data *data)
{
	t_list	*lst_a;
	t_list	*lst_b;

	lst_b = *stack_b;
	while (lst_b)
	{
		data->index_b = lst_b->index;
		lst_a = *stack_a;
		while (lst_a)
		{
			data->index_a = lst_a->index;
			if ((lst_b->content < lst_a->content) 
				&& (lst_a->index + lst_b->index < data->good_index_a + data->good_index_b))
			{
				data->good_index_a = data->index_a;
				data->good_index_b = data->index_b;
			}
			check_b_bigger_a(stack_a, stack_b, data);
			if (data->good_index_a == 0)
				break ;
			lst_a = lst_a->next;
		}
		lst_b = lst_b->next;
	}
}

void	put_index(t_list **stack_a, t_list **stack_b, t_data *data)
{
	int		i;
	t_list	*lst;

	lst = *stack_a;
	i = 0;
	data = malloc(sizeof(t_data));
	if (!data)
		ft_error();
	while (lst)
	{
		lst->index = i;
		lst = lst->next;
		i++;
	}
	lst = *stack_b;
	i = 0;
	while (lst)
	{
		lst->index = i;
		lst = lst->next;
		i++;
	}
}

void	pb_sort(t_list **stack_a, t_list **stack_b)
{
	int		bigger;
	t_list	*lst;

	bigger = bigger_int(stack_a) / 2;
	pb(stack_a, stack_b);
	pb(stack_a, stack_b);
	if ((*stack_b)->content < ((*stack_b)->next)->content)
		sb(stack_b);
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

void	exec_op(t_list **stack_a, t_list **stack_b, t_data *data)
{
	find_index(stack_a, stack_b, data);
	if (data->good_index_a + data->good_index_b == 0)
		pa(stack_b, stack_a);
	else
		rr_ra_rb(stack_a, stack_b, data);
}
