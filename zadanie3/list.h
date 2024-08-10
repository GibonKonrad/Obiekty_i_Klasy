#ifndef LIST_H_
#define LIST_H_
#include<iostream>
using namespace std;

struct element
{
    int nr_elementu;
    string zawartosc;
};
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
class Lista
{
    private:
        enum{Len=20};
        element elementy[Len];
        int top;
        int filled;
    public:
        Lista(int ilosc);
        void dodaj(string napis);
        bool isEmpty();
        bool isFull();
        void visit(void (*pf)(element & el));
        void show();
};
#endif