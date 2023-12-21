/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedro <pedro@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 02:02:00 by pedro             #+#    #+#             */
/*   Updated: 2023/09/05 00:29:03 by pedro            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Push_swap.h"

int main(int argc, char **argv)
{
    t_data  data;
    int     j;

    data.leng_a = argc -1; 
    data.leng_b = 0;
    j = 1;
    while (argv[j])
    {
        if (is_number(argv[j]) == 0)
        {
            write(2, "Ya la hemos liado\n", 19);
            return (1);
        }
        j++;
    }
    data.stack_a = malloc(sizeof(int)* data.leng_a);
    data.stack_b = malloc(sizeof(int)* data.leng_a);

    j = 0;
    while (j < argc - 1)
    {
        data.stack_a[j] = ft_atoi(argv[j + 1]);
        if (repeat_number(&data))
        {
            write(1, "REPEAT\n", 8);
            return (1);
        }
        j++;
    }
    push_b(&data);
    push_b(&data);
    push_b(&data);
    reverse_rotate_a_b(&data);
    print(&data);
    return (0);
}

