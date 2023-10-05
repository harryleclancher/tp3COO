#include "Note.h"


Note::Note(unsigned int my_id, Etudiant* etu, Devoir* dev, unsigned int my_note, string my_observation) {
	if (my_note > 20) {
		note = 20;
	}
	else {
		note = my_note;
	}
	id = my_id;
	etudiant = etu;
	devoir = dev;
	observation = my_observation;
	
}


unsigned int Note::getNote() {
	return note;
}

Etudiant* Note::getEtudiant() {
	return etudiant;
}