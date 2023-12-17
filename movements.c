/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedrogon <pedrogon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 18:51:50 by pedrogon          #+#    #+#             */
/*   Updated: 2023/12/05 18:54:56 by pedrogon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_a(t_data *data, int print)
{
	int	swap;

	swap = 0;
	if (data->leng_a > 1)
	{
		swap = data->stack_a[0];
		data->stack_a[0] = data->stack_a[1];
		data->stack_a[1] = swap;
		if (print == 0)
			write(1, "sa\n", 4);
	}
}

void	swap_b(t_data *data, int print)
{
	int	swap;

	swap = 0;
	if (data->leng_b >= 0)
	{
		swap = data->stack_b[0];
		data->stack_b[0] = data->stack_b[1];
		data->stack_b[1] = swap;
		if (print == 0)
			write(1, "sb\n", 4);
	}
}

void	swap_a_b(t_data *data)
{
	if (data->leng_a >= 0 && data->leng_b >= 0)
	{
		swap_a(data, 1);
		swap_b(data, 1);
		write(1, "ss\n", 4);
	}
}
//Coloca el primer número que está en el stack_b en la primera posición del stack_a
void	push_a(t_data *data)
{
	if (data->leng_b > 0)
	{
		data->leng_a++;
		down(data, 1);
		data->stack_a[0] = data->stack_b[0];
		write(1, "pa\n", 3);
		up(data, 1);
		data->leng_b--;
	}
}
// Lo contrario de push_a
void	push_b(t_data *data)
{
	if (data->leng_a > 0)
	{
		data->leng_b++;
		down(data, 0);
		data->stack_b[0] = data->stack_a[0];
		write(1, "pb\n", 3);
		up(data, 0);
		data->leng_a--;
	}
}
