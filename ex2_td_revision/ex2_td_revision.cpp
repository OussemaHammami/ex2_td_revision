
#include <iostream>
#include "BaseListe.h"
#include "ListeFifo.h"
#include "ListeLifo.h"
using namespace std;

int main()
{
	BaseListe* ptListe;
	ListeFifo fifo;
	ListeLifo lifo;
	ptListe = &fifo;
	*ptListe < 0 < 1; //on empile 0 puis 1 
	cout << "Liste=" << *ptListe<<endl; //à l'écran : Liste = 0 1 
	int i ;
	*ptListe > i; //on dépile dans i 
	cout << "Liste=" << *ptListe << " i=" << i << endl; //à l'écran Liste=1 i=0 
	ptListe = &lifo;
	*ptListe < 0 < 1; //on empile 0 puis 1 
	cout << "Liste=" << *ptListe << endl; //à l'écran : Liste = 0 1 
	*ptListe > i; //on dépile dans i 
	cout << "Liste=" << *ptListe << " i=" << i << endl; //à l'écran Liste=0 i=1 
}


