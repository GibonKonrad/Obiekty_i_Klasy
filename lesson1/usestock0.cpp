#include<iostream>
#include"stocks00.h"
int main()
{
    using std::cout;
    using std::ios_base;

    cout<<"Tworznie nowych obiektow przy uzyciu konsturkctoruw\n";
    Stock stock1("NanoSmart",20,12.50);
    stock1.show();
    Stock stock2=Stock("BurakPOL",2,2.0);
    stock2.show();
    Stock stock3;
    
    cout<<"Przypisanie stock1 do stock2:\n";
    stock2=stock1;
    cout<<"Wypis ze stock1 i stock2:\n";
    stock1.show();
    stock2.show();

    cout<<"Wyzerwoanie obiktu konsturktorem\n";
    stock1=Stock("FutroPOL",10,50.0);
    cout<<"Nowa wersja stock1:\n";
    stock1.show();
    cout<<"Gotowe\n";
    std::cin.get();
    std::cin.get();
    return 0;
}