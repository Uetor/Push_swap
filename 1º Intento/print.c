/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedro <pedro@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 04:09:17 by pedro             #+#    #+#             */
/*   Updated: 2023/08/31 04:31:20 by pedro            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Push_swap.h"

void print(t_data *data)
{
    int i;

    i = 0;
    while(i < data->leng_a)
    {
        printf("En el stack a de [%i]: %d\n", i, data->stack_a[i]);
        i++;
    } 
    printf("\n"); 
    i = 0;
    while(i < data->leng_b)
    {    
        printf("En el stack b de [%i]: %d\n", i, data->stack_b[i]);
        i++;
    }    
}