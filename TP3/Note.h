#pragma once
#include "Devoir.h"
#include "Etudiant.h"
class Note
{
private:
	unsigned int id;
	Etudiant* etudiant;
	Devoir* devoir;
	unsigned int note;
	string observation;

public:
	Note(unsigned int, Etudiant*, Devoir*, unsigned int, string);
	unsigned int getNote();
	Etudiant* getEtudiant();
};

