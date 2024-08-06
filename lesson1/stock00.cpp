#include<iostream>
#include"stocks00.h"
void Stock::acquire(const std::string & co, long n, double pr)
{
    company=co;
    if(n<0)
    {
        std::cout<<"Liczba udzialow nie moze byc ujemna; "
                <<" ustalam liczbe udzialow w "<<company<<" na 0\n";
        shares=0;
    }
    else 
        shares=n;
    share_val=pr;
    set_tot();
}
void Stock::buy(long num, double price)
{
    if(num<0)
    {
        std::cout<<"Liczba nabywanych udzialow nie moze byc ujemna. "
                <<"Transakcja przerwana.\n";
    }
    else
    {
        shares+=num;
        share_val=price;
        set_tot();
    }
}
void Stock::sell(long num, double price)
{
    using std::cout;
    if(num <0)
    {
        cout<<"Liczba sprzedawnahc udzialow nie moze byc ujemna. "
            <<"Transakcja przewana.\n";
    }
    else if(num>shares)
    {
        cout<<"Nie mozesz sprzedac wiecej udzalow niz posiadasz! "
            <<"Transakcja przerwana.\n";
    }
    else
    {
        shares-=num;
        share_val=price;
        set_tot();
    }
}
void Stock::update(double price)
{
    share_val=price;
    set_tot();
}
void Stock::show()
{
    std::cout<<"Spolka: "<<company 
        <<" Liczba udzialow: "<<shares<<'\n'
        <<"Cena udzialu: "<<share_val<<" zl"
        <<" Laczna wartosc udzialow: "<<total_val<<" zl "<<'\n';
}