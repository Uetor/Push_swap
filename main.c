/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedro <pedro@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 18:55:17 by pedrogon          #+#    #+#             */
/*   Updated: 2024/01/04 03:19:48 by pedro            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* void	ft_leaks(void)
{
	system("leaks -q 'push_swap'"); 
}*/
//Esta función sólo está para hacer pruebas, luego hay que quitarla.
void	print_stack(t_data *data)
{
	int	i;

	i = 0;
	printf("stack_a\n");
	while (i < data->leng_a)
	{
		printf("%d\n", data->stack_a[i]);
		i++;
	}
	i = 0;
	printf("stack_b\n");
	while (i < data->leng_b)
	{
		printf("%d\n", data->stack_b[i]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	//atexit(ft_leaks);
	t_data	data;

	data.argc = argc;
	data.argv = argv;
	join_argv(&data);
	reserve_memory(&data);
	ft_index(&data);
	move_big_numbers(&data);
	print_stack(&data);
	ft_free_memory(data.numbers); //Tengo que mirar porque cuando intento liberar en la función reserve memory me da fallo.
	free(data.stack_a);
	return (0);
}
