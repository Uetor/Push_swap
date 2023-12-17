/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedro <pedro@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 18:55:17 by pedrogon          #+#    #+#             */
/*   Updated: 2023/12/08 05:35:04 by pedro            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
//Esta función sólo está para hacer pruebas, luego hay que quitarla.
void	print_stack(t_data *data)
{
	int	i;

	i = 0;
	printf("stack_a   stack_b\n");
	while (i < data->leng_a || i < data->leng_b)
	{
		printf("%d           %d\n", data->stack_a[i], data->stack_b[i]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	t_data	data;

	data.argc = argc;
	data.argv = argv;
	join_argv(&data);
	int i = 0;
	int j = 0;
	while (data.numbers[i])
	{
		j = is_number(data.numbers[i]);
		printf("is number es %d\n", j);
		i++;
	}
	reserve_memory(&data);
	printf("Mayor o menor %d\n", min_max(&data));
	//print_stack(&data);
	return (0);
}
