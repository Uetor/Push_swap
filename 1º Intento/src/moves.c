#include "Push_swap.h"

void    swap_a(t_data *data, int print)
{
    int swap;

    swap = 0;
    if (data->leng_a >= 2)
    {
        swap = data->stack_a[0];
        data->stack_a[0] = data->stack_a[1];
        data->stack_a[1] = swap;
        if (print == 1)
            write(1, "sa\n", 3);
    }
}

void    swap_b(t_data *data, int print)
{
    int swap;

    swap = 0;
    if (data->leng_b >= 2)
    {
        swap = data->stack_b[0];
        data->stack_b[0] = data->stack_b[1];
        data->stack_b[1] = swap;
        if (print == 1)
            write(1, "sb\n", 3);
    }
}

void    swap_a_b(t_data *data)
{
    swap_a(data, 0);
    swap_b(data, 0);
    write(1, "ss\n", 3);
}

void push_a(t_data *data)
{
    if(data->leng_b > 0)
    {
        data->leng_a++;
        down(data, 1);
        data->stack_a[0] = data->stack_b[0];
        write(1, "pa\n", 3);
        up(data, 1);
        data->leng_b--;

    }
}

void push_b(t_data *data)
{
    if(data->leng_a > 0)
    {
        data->leng_b++;
        down(data, 0);
        data->stack_b[0] = data->stack_a[0]; 
        write(1, "pb\n", 3);
        up(data, 0);  
        data->leng_a--;
    }
}

void rotate_a(t_data *data, int print)
{
    int swap;

    data->i = data->leng_a;
    swap = data->stack_a[0];
    while (data->i >= 2)
    {
        up(data, 0);
        data->i--;
    }
    data->stack_a[data->leng_a - 1] = swap;
    if (print == 1)
        write(1,"ra\n", 3);

}

void rotate_b(t_data *data, int print)
{
    int swap;
      data->i = data->leng_b;
    swap = data->stack_b[0];
    while (data->i >= 2)
    {
        up(data, 1);
        data->i--;
    }
    data->stack_b[data->leng_b - 1] = swap;
    if (print == 1)
        write(1,"rb\n", 3);
}

void rotate_a_b(t_data *data)
{
    rotate_a(data, 0);
    rotate_b(data, 0);
    write(1, "rr\n", 3);
}

void reverse_rotate_a(t_data *data, int print)
{
    int swap;

    swap = data->stack_a[data->leng_a - 1];
    data->i = data->leng_a;
    while(data->i >= 1)
    {
        data->stack_a[data->i] = data->stack_a[data->i -1];
        data->i--;   
    }
    data->stack_a[0] = swap;
    if(print == 1)
        write(1, "rra\n", 4);
}

void reverse_rotate_b(t_data *data, int print)
{
     int swap;

    swap = data->stack_b[data->leng_b - 1];
    data->i = data->leng_b;
    while(data->i >= 1)
    {
        data->stack_b[data->i] = data->stack_b[data->i -1];
        data->i--;   
    }
    data->stack_b[0] = swap;
    if(print == 1)
        write(1, "rrb\n", 4);
}

void reverse_rotate_a_b(t_data *data)
{
    reverse_rotate_a(data, 0);
    reverse_rotate_b(data, 0);
    write(1, "rrr\n", 4);
}