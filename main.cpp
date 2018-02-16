#include<iostream>
#include"Tor.h"
#include"functions.h"
using namespace std;

int main() {
	Tor* tory;
	Obrotnica Ob;
	Ob=ustaw_liczbê_torów();
	tory = ustaw_tory(Ob.Get_liczba());

	dzialania(tory, Ob);
	Ob.Get_wagony();
	
	for (int i = Ob.GetTor(); i < Ob.Get_liczba()+ Ob.GetTor(); i++) {
		
		if (i >= Ob.Get_liczba()) {
			tory[i - Ob.Get_liczba()].Wypisz();
		}
		else 
			tory[i].Wypisz();
	}
	
	return 0;
}