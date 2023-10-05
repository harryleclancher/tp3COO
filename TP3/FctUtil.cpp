
#include "FctUtil.h"

using namespace std;

vector<Etudiant*> CreateStudents() {
	vector<Etudiant*> ret;
	for (int i = 1; i < 50; i++) {
		Etudiant* tmp = new Etudiant(i, "harry", "leclancher");
		ret.push_back(tmp);
	}return ret;
}

vector<Note*> CreateNotes(vector<Etudiant*>& etudiants, Devoir* devoir) {
	vector<Note*> ret; 
	int id = 1;
	for (vector<Etudiant*>::iterator it = etudiants.begin(); it != etudiants.end(); it++) {

		Note* tmp = new Note(id, *it, devoir, rand() % 21, "une observation");
		ret.push_back(tmp);
		id++;
	}return ret;
}

void etudiantsMoinsDe7(vector<Note*>& notes) {
	for (vector<Note*>::iterator it = notes.begin(); it != notes.end(); it++) {
		if ((*it)->getNote() < 7) {
			cout << "L'etudiant " << ((*it)->getEtudiant())->getId() << " a en dessous de sept, sa note est : " << (*it)->getNote();
		}
	}
}


