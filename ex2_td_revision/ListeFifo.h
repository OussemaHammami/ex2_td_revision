#pragma once
#include <iostream>
using namespace std;
#include "BaseListe.h"
class ListeFifo :
    public BaseListe
{
public:
    ListeFifo() {}
    ~ListeFifo() {}

    void operator>(int& s)
    {
        list<int> ::iterator itr=l.begin();
        s= *itr;
        l.pop_back();
       
    }

};

