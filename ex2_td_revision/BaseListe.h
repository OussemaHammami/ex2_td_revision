#pragma once
#include <iostream>
using namespace std;
#include <list>

class BaseListe
{
protected:
	list<int> l;

public:
	BaseListe(){}
	virtual ~BaseListe()
	{
		/*list<int>::iterator itr;
		for (itr = l.begin(); itr != l.end(); ++itr)
			delete *itr; */
	}


	BaseListe& operator< (int i) {
		l.push_back(i);
		return *this;
	}
	
	virtual void operator> (int&) {};
	friend ostream& operator<<(ostream& out, BaseListe b)
	{
		list<int> ::iterator itr;

		for (itr=b.l.begin(); itr!=b.l.end(); itr++)
			out << (*itr)<<" ";
		return out;
	}

};

