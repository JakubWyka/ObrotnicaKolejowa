#include "Tor.h"
#include<iostream>
using namespace std;

Tor::Tor(int tryb)
{
	if (tryb == 1) {
		scanf_s("%d", &liczba_wagonow);
		//wagony = new int[10000];
		//if (liczba_wagonow == 0)
			//wagony = NULL;
		for (int i = 0; i <liczba_wagonow ; i++) {
			scanf_s("%d", &wagony[i]);
		}
	}
}

void Tor::Wypisz()
{
	cout << liczba_wagonow<<" ";
	for (int i = 0; i < liczba_wagonow; i++) {
		cout << wagony[i] << " ";
	}
	cout << endl;
}

Tor::~Tor()
{
	//delete[] wagony;
}
