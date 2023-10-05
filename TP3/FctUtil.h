#pragma once
#include "Note.h"
#include <iostream>
#include <vector>

vector<Etudiant*> CreateStudents();
vector<Note*> CreateNotes(vector<Etudiant*>&, Devoir*);
void etudiantsMoinsDe7(vector<Note*>& notes);