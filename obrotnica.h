#pragma once
#include<iostream>
using namespace std;
#include"Tor.h"
class Obrotnica {
	int liczba_torow;
	int liczba_wagonow;
	int aktualny_tor;
	int wagony[10];
public:
	Obrotnica(int liczba=0);
	void SetTor(int numer);
	int GetTor();
	int Get_liczba();
	void Get_wagony();
	void z();//przesuniecie o 1 zgodnie
	void o();//------||-------- odwrotnie
	void w(Tor &tor);// wjazd na obrotnice
	void j(Tor &tor);//wyjazd z obrotnicy
};