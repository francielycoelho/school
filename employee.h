#include "employee.h"
#include <stdio.h>
#include <string.h>

employee::employee(int i, char *n, float w)
{
    id = i;
    strcpy(name, n);
    wage = w;
}
void employee::print_payinfo(float hrs)
{
    printf("empregado #%d     : %s\n ", id, name);
    printf("horas trabalhadas : %6.2f\n", hrs);
    printf("valor pago        : $%7.2f\n\n", hrs * wage);
}
