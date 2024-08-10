#include<iostream>
#include<string>

#ifndef BANK_H_
#define BANK_H_
using namespace std;
class Bank
{
    private:
        string nazwisko;
        string nr_rachunku;
        double saldo;
    public:
        Bank();
        Bank(string nazwisko_m, string nr_rachunku_m, double saldo_m);
        void show();
        void depozyt(double kwota);
        void wybierz(double kwota);
};
#endif