#include<iostream>
#include"Tor.h"
#include"Obrotnica.h"
#include "functions.h"
using namespace std;
Obrotnica ustaw_liczbê_torów() {
	int liczba_torow;
	scanf_s("%d", &liczba_torow);
	Obrotnica Ob(liczba_torow);
	return Ob;
}
void dzialania(Tor* tory,Obrotnica &Ob)
{
	int ilosc1,ilosc2;
	char znak;
	scanf_s("%d", &ilosc1);
	for (int j = 0; j < ilosc1; j++) {
		cin >> znak;
		cin >> ilosc2;
		//scanf_s("%c", &znak);
		//scanf_s("%d", &ilosc2);
		if (znak == 'w') {
			for (int i = 0; i < ilosc2; i++) {
				Ob.w(tory[Ob.GetTor()]);
			}
		}
		else if (znak == 'z') {
			for (int i = 0; i < ilosc2; i++) {
				Ob.z();
			}
		}
		else if (znak == 'j') {
			for (int i = 0; i < ilosc2; i++) {
				Ob.j(tory[Ob.GetTor()]);
			}
		}
		else   {
			for (int i = 0; i < ilosc2; i++) {
				Ob.o();
			}
		}
	}
}
Tor* ustaw_tory(int liczba_torow){
	Tor *tory = new Tor[liczba_torow];
	for (int i = 0; i < liczba_torow; i++) {
		  tory[i]=Tor(1);
	}
	return tory;
}