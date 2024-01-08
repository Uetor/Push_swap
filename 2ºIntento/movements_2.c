/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements_2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedrogon <pedrogon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 19:14:46 by pedrogon          #+#    #+#             */
/*   Updated: 2023/12/19 19:16:55 by pedrogon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_a(t_data *data, int print)
{
	int	swap;

	swap = data->stack_a[0];
	data->i = data->leng_a;
	while (data->i >= 2)
	{
		up(data, 0);
		data->i--;
	}
	data->stack_a[data->leng_a - 1] = swap;
	if (print == 0)
		write(1, "ra\n", 3);
}

void	rotate_b(t_data *data, int print)
{
	int	swap;

	swap = data->stack_b[0];
	data->i = data->leng_b;
	while (data->i >= 2)
	{
		up(data, 1);
		data->i--;
	}
	data->stack_b[data->leng_b - 1] = swap;
	if (print == 0)
		write(1, "rb\n", 3);
}

void	rotate_a_b(t_data *data)
{
	rotate_a(data, 1);
	rotate_b(data, 1);
	write(1, "rr\n", 3);
}

