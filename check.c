/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedro <pedro@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 18:57:24 by pedrogon          #+#    #+#             */
/*   Updated: 2024/01/04 05:42:24 by pedro            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_number(char *str) //Va antes de la reserva de memoria.
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (i == 0)
		{
			if (ft_isdigit(str[i]) == 0 && str[i] != '-')
				return (0);
		}
		if (i > 0)
		{
			if (ft_isdigit(str[i]) == 0)
				return (0);
		}
		if (str[i] == '.' || str[i] == ',') //Comprueba que no hay coma o punto, para que no sea un número decimal.
			return (0);
		i++;
	}
	return (1);
}

int	repeat_number(t_data *data) //Va después de la reserva de memoria.
{
	int	i;
	int	j;

	i = 0;
	while (data->stack_a[i].index)
	{
		j = i + 1;
		while (data->stack_a[j].index)
		{
			if (data->stack_a[i].index == data->stack_a[j].index)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_atoli(const char *str)
{
	long	i;
	long	sign;
	long	num;

	i = 0;
	sign = 1;
	num = 0;
	while (str[i] != '\0' && (str[i] == ' ' || str[i] == '\f' || str[i] == '\n'
			|| str[i] == '\r' || str[i] == '\t' || str[i] == '\v'))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}
	return (num * sign);
}
