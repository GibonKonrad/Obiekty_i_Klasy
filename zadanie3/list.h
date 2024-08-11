#ifndef LIST_H_
#define LIST_H_
#include<iostream>
using namespace std;

struct element
{
    int nr_elementu;
    string zawartosc;
};
void usun(element & a);
void zmien(element & a);
class Lista
{
    private:
        enum{pocz=0,Len=20};
        element elementy[Len];
        int top=pocz;
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