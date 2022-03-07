#include <stdio.h>
#include <stdlib.h>
#include <assert.h>


typedef struct _Student_ {
	char* firstname;
	char* lastname;
	int studentID;
	int studiesID;
	double final_test;
	double quick_quiz;
	double exercise;
} Student;

Student*  newStudent() {
	// allocate memory for struct tvaiable as before
	// do not forget to use sizeof wihtin malloc!
	Student* student = malloc(sizeof(Student));
	assert(student != NULL);
	// dereferenzieren des pointers gibt eine struct variable des typen Student aus.
	// Uuse of b rackets is mandatory!
	student->firstname = NULL;
	student->lastname = NULL;
	student->studentID = 0;
	student->studiesID = 0;
	student->final_test = 0.;
	student->quick_quiz = 0.;
	student->exercise = 0.;

	return student;
}




int main() {



}