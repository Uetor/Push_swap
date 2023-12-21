/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedrogon <pedrogon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 19:06:58 by pedrogon          #+#    #+#             */
/*   Updated: 2023/12/21 20:41:42 by pedrogon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./libft/libft.h"
# include <stdio.h>

# define MIN	-2147483648
# define MAX	2147483647

typedef struct s_data
{
    //Los stacks con sus respectivas longitudes
	int		*stack_a;
	int		leng_a;
	int		*stack_b;
	int		leng_b;

    //Contadores
	int		i;
	int		j;

    //argc argv
	int		argc;
	char	**argv;

	//Puntero donde lo convierto todo a un string y donde luego lo guardo todo con un split
	char	*string;
	char	**numbers;

}	t_data;

void	join_argv(t_data *data);
void	reserve_memory(t_data *data);
void	ft_free_memory(char **str);
//movimientos
void	swap_a(t_data *data, int print);
void	swap_b(t_data *data, int print);
void	swap_a_b(t_data *data);
void	push_a(t_data *data);
void	push_b(t_data *data);
void	rotate_a(t_data *data, int print);
void	rotate_b(t_data *data, int print);
void	rotate_a_b(t_data *data);
void	reverse_rotate_a(t_data *data, int print);
void	reverser_rotate_b(t_data *data, int print);
void	reverse_rotate_a_b(t_data *data);
//subir y bajar los números
void	up(t_data *data, int inverse);
void	down(t_data *data, int inverse);
//Check
int		is_number(char *str);
int		repeat_number(t_data *data);
int		ft_atoli(const char *str);
//Función para pruebas
void	print_stack(t_data *data);
//Ordenar números
void	order_numbers(t_data *data);
void	ft_index(t_data *data);

#endif