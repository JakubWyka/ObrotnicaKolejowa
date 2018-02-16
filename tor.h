#pragma once
class Tor {
public:	
	int liczba_wagonow;
	int wagony[10000];

	Tor(int tryb=0);
	void Wypisz();
	~Tor();
};