#include<iostream>
#include"stocks00.h"
Stock::Stock()
{
    std::cout<<"Wywolano konsturkotor domyslny\n";
    company="bez nazwy";
    shares=0;
    share_val=0.0;
    total_val=0.0;
}
Stock::Stock(const std::string & co, long n, double pr)
{
    std::cout<<"Wywolano konstuktor z argumentem "<<co<<'\n';
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
    using std::cout;
    using std::ios_base;
    ios_base::fmtflags orig=
        cout.setf(ios_base::fixed, ios_base::floatfield);
    std::streamsize prec=cout.precision(3);
    cout<<"Spolka: "<<company 
    <<" Liczba udzialow: "<<shares<<'\n';
    cout<<" Cena udzialow: "<<share_val<<" zl";
    cout.precision(2);
    cout<<" Laczna wartosc udzialow: "<<total_val<<" zl"<<'\n';
    cout.setf(orig, ios_base::floatfield);
    cout.precision(prec);
}