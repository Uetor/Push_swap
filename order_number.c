/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   order_number.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedrogon <pedrogon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 20:36:01 by pedrogon          #+#    #+#             */
/*   Updated: 2023/12/19 20:28:54 by pedrogon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	order_numbers(t_data *data)
{
	if (data->stack_a[0] > data->stack_a[1]
		&& data->stack_a[0] > data->stack_a[2]
		&& data->stack_a[1] < data->stack_a[2])
		rotate_a(data, 0);
	else if (data->stack_a[0] > data->stack_a[1]
		&& data->stack_a[0] < data->stack_a[2])
		swap_a(data, 0);
	else if (data->stack_a[0] < data->stack_a[1]
		&& data->stack_a[0] > data->stack_a[2])
		reverse_rotate_a(data, 0);
	else if (data->stack_a[0] < data->stack_a[1]
		&& data->stack_a[0] < data->stack_a[2]
		&& data->stack_a[1] > data->stack_a[2])
	{
		reverse_rotate_a(data, 0);
		swap_a(data, 0);
	}
	else if (data->stack_a[0] > data->stack_a[1]
		&& data->stack_a[0] > data->stack_a[2]
		&& data->stack_a[1] > data->stack_a[2])
	{
		swap_a(data, 0);
		reverse_rotate_a(data, 0);
	}
}

