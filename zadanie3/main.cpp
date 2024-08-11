#include<iostream>
#include"list.h"

int main()
{
    using namespace std;
    Lista obj1(2);
    obj1.dodaj("Paplotka");
    obj1.show();
    obj1.visit(usun);
    obj1.show();
    obj1.visit(zmien);
    obj1.show();
    cin.get();
    cin.get();
    return 0;
}