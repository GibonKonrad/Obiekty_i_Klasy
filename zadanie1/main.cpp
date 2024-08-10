#include"bank.h"
#include<iostream>
int main()
{
    using namespace std;
    Bank klient1("Skubel","1234567",120000.10);
    klient1.show();
    klient1.depozyt(1000);
    klient1.show();
    klient1.wybierz(1000);
    klient1.show();
    cin.get();
    cin.get();
    return 0;
}