#include"bank.h"
#include<iostream>
#include<string>
using namespace std;
Bank::Bank(){}
Bank::Bank(string nazwisko_m, string nr_rachunku_m, double saldo_m)
{
    nazwisko=nazwisko_m;
    nr_rachunku=nr_rachunku_m;
    saldo=saldo_m;
}
void Bank::show()
{
    cout<<"konto o numerze rachunku: "<<nr_rachunku<<" P. "
    <<nazwisko<<" Posiada: "<<saldo<<endl;
}
void Bank::wybierz(double kwota)
{
    if(kwota<saldo){
        cout<<"Pobrano z konta: "<<kwota<<endl;
        saldo-=kwota;
    }
    else 
        cout<<"Zbyt duza kwota!!!"<<endl;

}
void Bank::depozyt(double kwota)
{
    cout<<"Wplaciles na konto: "<<kwota<<endl 
    <<"Teraz masz: "<<(saldo+=kwota);
}