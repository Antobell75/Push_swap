/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_algo_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwsasd <dwsasd@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 17:00:48 by anbellar          #+#    #+#             */
/*   Updated: 2025/05/05 19:02:20 by dwsasd           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void rr_ra_rb(t_list **stack_a, t_list **stack_b, t_data *data)
{
	while (data->good_index_a > 0 || data->good_index_b > 0)
	{
		printf("Before rr_ra_rb: good_index_a = %d, good_index_b = %d\n", data->good_index_a, data->good_index_b);
		if (data->good_index_a > 0 && data->good_index_b > 0)
		{
			rr(stack_a, stack_b);
			data->good_index_a--;
			data->good_index_b--;
		}
		else if (data->good_index_a > 0)
		{
			ra(stack_a);
			data->good_index_a--;
		}
		else if (data->good_index_b > 0)
		{
			printf("ici 3\n");
			rb(stack_b);
			data->good_index_b--;
		}
	}
}
