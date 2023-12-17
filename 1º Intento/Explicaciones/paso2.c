/*Con está función comprobamos que los parámetros que se introduzcan sean todos números
además que no nos de fallo si hay números negativos.
La comprobación va antes de que se guarde la memoria.*/

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