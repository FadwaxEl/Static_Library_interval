#pragma once
#include "Tableau.h"
using namespace interval;
class TableauBorne :
    public Tableau
{
private:
    float min;
    float max;
public:
    TableauBorne(int, float, float);
    void Remplir();
    float operator[](unsigned int);
    float& operator()(unsigned int, float );



};

