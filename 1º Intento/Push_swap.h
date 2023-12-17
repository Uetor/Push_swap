/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedrogon <pedrogon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 01:56:35 by pedro             #+#    #+#             */
/*   Updated: 2023/12/05 19:05:41 by pedrogon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./Libft/libft.h"
# include <stdio.h>

typedef struct s_data
{
	int	*stack_a;
	int	leng_a;
	int	*stack_b;
	int	leng_b;
	int	i;
	int	j;
}	t_data;

void print(t_data *data);
int is_number(char *str);
void swap_a(t_data *data, int print);
void swap_b(t_data *data, int print);
void swap_a_b(t_data *data);
void push_a(t_data *data);
void push_b(t_data *data);
void up(t_data *data, int inverse);
void down(t_data *data, int inverse);
void rotate_a(t_data *data, int print);
void rotate_b(t_data *data, int print);
void rotate_a_b(t_data *data);
void reverse_rotate_a(t_data *data, int print);
void reverse_rotate_b(t_data *data, int print);
void reverse_rotate_a_b(t_data *data);
int repeat_number(t_data *data);

#endif