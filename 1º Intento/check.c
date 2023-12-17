#include "Push_swap.h"

int is_number(char *str)
{
    int i;

    i = 0;
    while(str[i])
    {
        if(i == 0)
        {
            if (ft_isdigit(str[i]) == 0  && str[i] != '-') //Con este if comprovamos que sea un número y además en en la posición 0 haya un -, para que no de error con los números negativos
                return (0);
        }
        if (i > 0)
        {
            if (ft_isdigit(str[i]) == 0)
                return (0);
        }
        
        i++;
    }
    return (1);
}

int repeat_number(t_data *data) // Falla cuando metes números negativos.
{
    data->j = data->leng_a;
    data->i = data->leng_a -1;
    while(data->j > 0)
    {
        while(data->i > 0)
        {
            if (data->stack_a[data->j] == data->stack_a[data->i])
                return(0);
            data->i--;
        }                   
       data->j--;
    }
    return(1);
}
