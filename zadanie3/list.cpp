#include"list.h"
#include<iostream>
Lista::Lista(int ilosc)
{
    for(int i=0; i<ilosc; i++)
    {
        cout<<"Podaj: zawartosc elementu nr"<<i+1<<": "<<endl;
        cin>>elementy[i].zawartosc;
        elementy[i].nr_elementu=i+1;
    }
    filled=ilosc;
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
        elementy[top+1].nr_elementu=top+1;
        elementy[++top].zawartosc=napis;
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
        cout<<elementy[i].nr_elementu<<". element"
        <<elementy[i].zawartosc<<endl;
    }
}
void Lista::visit(void (*pf)(element & el))
{
    cout<<"Na jakim elemencie chcesz wykonac operacje: "<<endl;
    int element;
    Lista::show();
    (*pf)(elementy[element-1]);
}