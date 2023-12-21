/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedrogon <pedrogon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 18:55:17 by pedrogon          #+#    #+#             */
/*   Updated: 2023/12/21 20:51:17 by pedrogon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_leaks(void)
{
	system("leaks -q 'push_swap'");
}
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
	atexit(ft_leaks);
	t_data	data;

	data.argc = argc;
	data.argv = argv;
	join_argv(&data);
	int i = 0;
	int j = 0;
	while (data.numbers[i])
	{
		j = is_number(data.numbers[i]);
		//printf("is number es %d\n", j);
		i++;
	}
	reserve_memory(&data);
	ft_index(&data);
	print_stack(&data);
	ft_free_memory(data.numbers); //Tengo que mirar porque cuando intento liberar en la función reserve memory me da fallo.
	free(data.stack_a);
	return (0);
}
