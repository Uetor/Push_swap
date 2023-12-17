/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedro <pedro@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 19:06:58 by pedrogon          #+#    #+#             */
/*   Updated: 2023/12/08 05:34:13 by pedro            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./Libft/libft.h"
# include <stdio.h>

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

void	reserve_memory(t_data *data);
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
void	join_argv(t_data *data);
int		repeat_number(t_data *data);
int		ft_atoli(const char *str);
int		min_max(t_data *data);
//Función para pruebas
void	print_stack(t_data *data);

#endif