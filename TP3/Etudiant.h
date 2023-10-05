#pragma once
#include <iostream>
using namespace std;

class Etudiant
{
	unsigned int id;
	string nom;
	string prenom;
public:
	Etudiant(unsigned int, string, string);
	unsigned int getId();
	string getPrenom();
};

