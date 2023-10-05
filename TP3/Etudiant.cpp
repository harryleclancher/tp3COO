#include "Etudiant.h"


Etudiant::Etudiant(unsigned int  my_id, string my_nom, string my_prenom) {
	id = my_id;
	nom = my_nom;
	prenom = my_prenom;
}

unsigned int Etudiant::getId() {
	return id;
}
string Etudiant::getPrenom() {
	return prenom;
}