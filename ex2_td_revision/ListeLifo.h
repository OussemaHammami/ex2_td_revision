#pragma once
#include <iostream>
using namespace std;
#include "BaseListe.h"
class ListeLifo :
    public BaseListe
{
public:

    ListeLifo(){}
    ~ListeLifo(){}


    void operator>( int& s)
    { 
        list<int> :: iterator itr = l.end();
        itr--;
        s = *itr ;
        l.pop_front();
        
    }



};


