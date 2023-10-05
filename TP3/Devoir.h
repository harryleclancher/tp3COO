#pragma once

#include "Niveau.h"


using namespace std;

class Devoir
{
private:
	unsigned int num;
	string nom;
	string description;
	Niveau difficulte;
public:
	Devoir(unsigned int, string, string, Niveau);
};

