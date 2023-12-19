/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reserve_memory.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedrogon <pedrogon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 19:21:26 by pedrogon          #+#    #+#             */
/*   Updated: 2023/12/19 20:24:19 by pedrogon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reserve_memory(t_data *data)
{
	data->leng_a = 0;
	while (data->numbers[data->leng_a])
		data->leng_a++;
	//printf("Estoy comprobando leng_a %d\n", data->leng_a);
	data->stack_a = malloc(sizeof(int) * data->leng_a);
	data->stack_b = malloc(sizeof(int) * data->leng_a);
	data->i = 0;
	while (data->i < data->leng_a)
	{
		if (ft_atoli(data->numbers[data->i]) >= MIN  //Aquí se comprueba que el número está dentro del rango de los enteros.
			&& ft_atoli(data->numbers[data->i]) <= MAX)
		{
			data->stack_a[data->i] = ft_atoli(data->numbers[data->i]);
			//printf("%d ", data->stack_a[data->i]);
		}
		else
		{
			printf("El número no es un entero");
			return ;
		}
		data->i++;
	}
	//printf("\n");
}

//Coge todo lo que haya en argv y lo convierte en un solo string.
void	join_argv(t_data *data)
{
	char 	*aux;
	int		i;

	i = 1;
	if (data->argc > 1)
	{
		data->string = ft_strdup(data->argv[i]);
		while(i < data->argc - 1)
		{
			aux = ft_strjoin(data->string, " ");
			free(data->string);
			data->string = ft_strdup(aux);
			free(aux);
			aux = ft_strjoin(data->string, data->argv[i + 1]);
			free(data->string);
			data->string = ft_strdup(aux);
			free(aux);
			i++;
		}
		data->numbers = ft_split(data->string, ' ');
	}
	printf("%s\n", data->string);
}