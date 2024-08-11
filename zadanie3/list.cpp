#include"list.h"
#include<iostream>
void usun(element & a)
{
    a.zawartosc="";
}
void zmien(element & a)
{
    cout<<"Na co chcesz zmienic zwartosc: "<<endl;
    string zaw;
    cin>>zaw;
    a.zawartosc=zaw;
}
Lista::Lista(int ilosc)
{
    for(int i=0; i<ilosc; i++)
    {
        cout<<"Podaj: zawartosc elementu nr"<<i+1<<": "<<endl;
        cin>>elementy[i].zawartosc;
        elementy[i].nr_elementu=i+1;
    }
    filled=ilosc;
    top+=ilosc-1;
}
bool Lista::isEmpty()
{
    return !top;
}
bool Lista::isFull()
{
    if(top>=Len)
    {
        return true;
    }
    else 
        return false;
}
void Lista::dodaj(string napis)
{
    if(Lista::isFull()==false)
    {
        elementy[top+1].nr_elementu=top+2;
        elementy[++top].zawartosc=napis;
        filled++;
    }
    else
    {
        cout<<"Przepelniony"<<endl;
    }
}
void Lista::show()
{
    for(int i=0; i<filled; i++)
    {
        cout<<elementy[i].nr_elementu<<". element: "
        <<elementy[i].zawartosc<<endl;
    }
}
void Lista::visit(void (*pf)(element & el))
{
    cout<<"Na jakim elemencie chcesz wykonac operacje: "<<endl;
    int element1;
    cin>>element1;
    (*pf)(elementy[element1-1]);
}