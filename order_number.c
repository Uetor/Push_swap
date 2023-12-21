/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   order_number.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedrogon <pedrogon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 20:36:01 by pedrogon          #+#    #+#             */
/*   Updated: 2023/12/21 20:59:01 by pedrogon         ###   ########.fr       */
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
//Creo un indice donde enumero las posiciones de los números de 0 hasta el máximo de números.
void	ft_index(t_data *data)
{
	int	*aux;
	int	i;
	int	j;

	aux = malloc(sizeof(int *) * data->leng_a);
	i = 0;
	while (i < data->leng_a)
	{
		j = 0;
		while (j < data->leng_a)
		{
			if (data->stack_a[i] > data->stack_a[j])
				aux[i]++;
			j++;
		}
		i++;
	}
	i = 0;
	while (i < data->leng_a)
	{
		data->stack_a[i] = aux[i];
		printf("%d ", data->stack_a[i]); //Para comprobar.
		i++;
	}
	printf("\n");//Para comprobar.
	free(aux);
}
