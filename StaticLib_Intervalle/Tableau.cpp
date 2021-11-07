#include "pch.h"
#include "Tableau.h"
#include <iostream>
#include <assert.h>
using namespace std;
using namespace interval;
Tableau::Tableau(unsigned int t)
{
	this->taille = t;
	this->T = new float[t];
	for (unsigned int i = 0; i < t; i++)
	{
		this->T[i] = 0;
	}

}

Tableau::Tableau(const Tableau& Tab)
{
	this->taille = Tab.taille;
	this->T = new float[Tab.taille];
	for (unsigned int i = 0; i < this->taille; i++)
	{
		this->T[i] = Tab.T[i];
	}
}

void Tableau::Remplir()
{
	for (unsigned int i = 0; i < this->taille; i++)
	{
		cout << "Tapez la valeur numero " << i << " : ";
		cin >> this->T[i];

	}
	
}

Tableau Tableau::operator=(const Tableau& Tab)
{
	if (this != &Tab)
	{
		this->taille = Tab.taille;
		this->T = new float[Tab.taille];
		for ( unsigned int i = 0; i < this->taille ; i++)
		{
			this->T[i] = Tab.T[i];
		}
	}
	return *this;
}

float& Tableau::operator[](unsigned int i)
{
	assert(i >= 0 && i < 3);//debeug
	try//en mode release
	{
		if (i < 0 || i >= 3) throw "range erre";

		return this->T[i];

	}
	catch (char* e)
	{
		cout << e << endl;
	}
	// TODO: insérer une instruction return ici
}

void Tableau::print() const
{
	for ( unsigned int u = 0; u < this->taille; u++)
	{
		cout << "T[" << u << "]=" << this->T[u] << endl;
	}
	

}

interval::Tableau::~Tableau()
{
	if (this->T)
		delete[] this->T;
	this->T = NULL;
}
