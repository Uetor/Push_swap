/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements_3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedro <pedro@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 19:31:25 by pedrogon          #+#    #+#             */
/*   Updated: 2024/01/04 05:47:59 by pedro            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	up(t_data *data, int inverse)
{
	data->j = 0;
	data->i = data->leng_a - 1;
	if (inverse == 0)
	{
		while (data->i > 0)
		{
			data->stack_a[data->j].index = data->stack_a[data->j + 1].index;
			data->i--;
			data->j++;
		}
	}
	else
	{
		data->j = 0;
		data->i = data->leng_b - 1;
		while (data->i > 0)
		{
			data->stack_b[data->j].index = data->stack_b[data->j + 1].index;
			data->i--;
			data->j++;
		}
	}

}

void	down(t_data *data, int inverse)
{
	int	j;

	j = data->leng_b;
	if (inverse == 0)
	{
		while (j > 0)
		{
			data->stack_b[j].index = data->stack_b[j - 1].index;
			j--;
		}
	}
	else
	{
		j = data->leng_a;
		while (j > 0)
		{
			data->stack_a[j].index = data->stack_a[j - 1].index;
			j--;
		}
	}
}

void	reverse_rotate_a(t_data *data, int print)
{
	int	swap;

	swap = data->stack_a[data->leng_a - 1].index;
	data->i = data->leng_a;
	while (data->i >= 1)
	{
		data->stack_a[data->i].index = data->stack_a[data->i - 1].index;
		data->i--;
	}
	data->stack_a[0].index = swap;
	if (print == 0)
		write(1, "rra\n", 4);
}

void	reverser_rotate_b(t_data *data, int print)
{
	int	swap;

	swap = data->stack_b[data->leng_b - 1].index;
	data->i = data->leng_b;
	while (data->i >= 1)
	{
		data->stack_b[data->i].index = data->stack_b[data->i - 1].index;
		data->i--;
	}
	data->stack_b[0].index = swap;
	if (print == 0)
		write(1, "rrb\n", 4);
}

void	reverse_rotate_a_b(t_data *data)
{
	reverse_rotate_a(data, 1);
	reverser_rotate_b(data, 1);
	write(1, "rrr\n", 4);
}
