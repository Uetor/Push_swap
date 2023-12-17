#include "Push_swap.h"
#include <stdio.h>

int main(int argc, char **argv)
{
    t_data  data;
    int     j;

    data.leng_a = argc -1;  //Con esto obtenemos la longitud máxima que debemos reservar de memoría
    data.leng_b = argc -1;
    data.stack_a = malloc(sizeof(int)* data.leng_a);//Creamos la reserva de memoria. 
    data.stack_b = malloc(sizeof(int)* data.leng_b);
    j = 0;
    while (j < argc - 1)
    {
        data.stack_a[j] = ft_atoi(argv[j + 1]);
        printf ("%d\n", data.stack_a[j]);
        j++;
    }
    return (0);
}

