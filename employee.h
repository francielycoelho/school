#include "employee.h"

using namespace std;

int main()
{
    employee um(1, "empregado 1", 15.00);
    employee dois(2, "empregado 2", 22.00);

    um.print_payinfo(40.00);
    dois.print_payinfo(52.00);


    return 0;
}
