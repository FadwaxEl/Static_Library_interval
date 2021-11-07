#include "pch.h"
#include "TableauBorne.h"
using namespace interval;
#include <iostream>
#include <assert.h>
using namespace std;
TableauBorne::TableauBorne(int t, float m, float x) :Tableau(t)
{
	this->min = m;
	this->max = x;
}

void TableauBorne::Remplir()
{
	float val;
	for (int i = 0; i < this->taille; i++)
	{
		cout << "Tapez la valeur numero (tableau borne) " << i << " : ";
		cin >> val;
		if (this->min < val && val <this->max)
		{
			this->T[i] = val;
		}
		else
		{
			this->T[i] = 0;
		}
	}
}

float TableauBorne::operator[](unsigned int i)
{
	assert(i >= 0 && i < this->taille);//debeug
	try//en mode release
	{
		if (i < 0 || i >= this->taille) throw "range erre";

		return this->T[i];

	}
	catch (char* e)
	{
		cout << e << endl;
	}
	
}

float& TableauBorne::operator()(unsigned int i, float val)
{
	assert((i >= 0 && i < this->taille) && (this->min < val && val < this->max));//debeug
	try//en mode release
	{
		if ((i < 0 || i >= this->taille) && (this->min > val && val > this->max)) throw "range erre";

		this->T[i] = val;
		return this->T[i];

	}
	catch (char* e)
	{
		cout << e << endl;
	}

	// TODO: insérer une instruction return ici
}

