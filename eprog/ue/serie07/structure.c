#include <stdio.h>
#include <assert.h>
#include <math.h>

typedef struct _Student_ {
	char* firstname;
	char* lastname;
	int studentID;
	int studiesID;
	double final_test;
	double quick_quiz;
	double exercise;

} Student;

// definieren eines pointers auf die funktion newStudent

Student* newStudent() {
	// wir legen speicher für den pointer var auf struktur fest
	Student* student = malloc(sizeof(Student));
	assert(student != NULL); //malloc liefert NZULL falls es Fehler bei er Allokation von Speicher gibt

	student->firstname = NULL;
	student->lastname = NULL;
	student->studentID = 0;
	student->studiesID= 0;
	student->final_test= 0.;
	student->quick_quiz= 0.;
	student->exercise= 0.;

	return student; // Rückgabe des pointers
}

Student* freeStudent() {
	Student* delStudent(Student* student) {
		assert(student != NULL);

		// delete firstname, if memory has been allocated
		if (student->firstname != NULL) {
			free(student->fistname);
		}
		// delete lastname, if memory has been allocated
		if (student->lastname != NULL) {
			free(student->lastname)
		}
	}

}

int main() {

}