#ifndef GOLF_H_
#define GOLF_H_
#include<iostream>

class Golf
{  
    private:
        enum{Len=40};
        char fullname[Len];
        int handicap;
    public:
        Golf(const char fullname_m[Len], int handicap_m);
        Golf();
        void showgolf();
};
#endif