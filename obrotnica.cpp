#include "Obrotnica.h"
//#include "Tor.h"

Obrotnica::Obrotnica(int liczba)
{
	liczba_torow = liczba;
	liczba_wagonow = 0;
	aktualny_tor = 0;
	for (int i = 0; i < 10; i++) {
		wagony[i] = 0;//
	}
}

void Obrotnica::SetTor(int numer)
{
	aktualny_tor = numer;
}

int Obrotnica::GetTor()
{
	return aktualny_tor;
}

int Obrotnica::Get_liczba()
{
	return liczba_torow;
}

void Obrotnica::Get_wagony()
{
	cout << liczba_wagonow<<" ";
	for (int i = liczba_wagonow-1; i >= 0; i--) {
		cout << wagony[i] << " ";
	}
	cout << endl;
}

void Obrotnica::z()
{
	if (aktualny_tor <= (liczba_torow - 2))
		aktualny_tor++;
	else if (aktualny_tor == liczba_torow-1)
		aktualny_tor = 0;
}

void Obrotnica::o()
{
	if (aktualny_tor==0)
		aktualny_tor=liczba_torow-1;
	else 
		aktualny_tor--;
}

void Obrotnica::w(Tor &tor)
{
	int wolne_miejsce = 10 - liczba_wagonow;
	if (wolne_miejsce > 0 && tor.liczba_wagonow >= 1) {
		liczba_wagonow = liczba_wagonow + 1;
		wagony[liczba_wagonow-1] = tor.wagony[0];
		tor.liczba_wagonow = tor.liczba_wagonow - 1;
		for (int i = 0; i < tor.liczba_wagonow; i++) {//przepisanie na nizsze indeksy poozostalych wagonow
			tor.wagony[i] = tor.wagony[i + 1];
		}
	}
}

void Obrotnica::j(Tor &tor)
{
	if (liczba_wagonow > 0) {
		for (int i = tor.liczba_wagonow-1; i >=0; i--) {//przepisanie na wyzsze indeksy poozostalych wagonow
			tor.wagony[i+1] = tor.wagony[i];
		}
		tor.liczba_wagonow++;
		tor.wagony[0]=wagony[liczba_wagonow-1];
		liczba_wagonow--;
	}
}


