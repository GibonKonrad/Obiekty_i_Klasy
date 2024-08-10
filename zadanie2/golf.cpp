#include"golf.h"
#include<iostream>
#include<cstring>
using namespace std;
Golf::Golf(const char fullname_m[Len], int handicap_m)
{
    strcpy(fullname,fullname_m);
    handicap=handicap_m;
}
Golf::Golf()
{
    char fullname_m[Len];
    int handicap;
    cout<<"Podaj imie i nazwisko i handicap: \n";
    cin.getline(fullname,Len);
    cin>>handicap;
    *this=Golf(fullname,handicap);
}
void Golf::showgolf()
{
    cout<<"Gracz: "<<fullname<<" ma handicap: "<<handicap<<endl;
}