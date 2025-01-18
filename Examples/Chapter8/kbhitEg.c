#include <stdio.h>
#include <conio.h>
int main()
{
    double amount;
    amount = 0.20;
    _cprintf("Printing 5-percent tax table\n\r");
    _cprintf("Press a key to stop.\n\n\r");
    do
    {
        _cprintf("amount:%f,tax:%f\n\r", amount, amount * 0.05);
        if (kbhit())
            break;
        amount = amount + 0.20;
    } while (amount < 100.0);
    return 0;
}