#include "Devoir.h"


Devoir::Devoir(unsigned int my_id, string my_nom, string my_description, Niveau my_level) {
	num = my_id;
	nom = my_nom;
	description = my_description;
	difficulte = my_level;
}