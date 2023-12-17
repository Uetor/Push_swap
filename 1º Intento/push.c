/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedro <pedro@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 02:16:23 by pedro             #+#    #+#             */
/*   Updated: 2023/09/01 04:53:12 by pedro            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Push_swap.h"

void    up(t_data *data, int inverse)
{
    data->j = 0;
    data->i = data->leng_a - 1;
    if(inverse == 0)
    {
        while (data->i > 0)
        {
            data->stack_a[data->j] = data->stack_a[data->j + 1];
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
            data->stack_b[data->j] = data->stack_b[data->j + 1];
            data->i--;
            data->j++;
        }
    }
}

void down(t_data *data, int inverse)
{
    int j;

    j = data->leng_b;
    if(inverse == 0)
    {
        while (j > 0)
        {
            data->stack_b[j] = data->stack_b[j - 1];
            j--;
        }
    }    
    else
    {
        j = data->leng_a;
        while (j > 0)
        {
            data->stack_a[j] = data->stack_a[j -1];
            j--;    
        }
    }
}