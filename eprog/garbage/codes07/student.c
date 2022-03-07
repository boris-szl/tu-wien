#include <stdlib.h>
#include <strings.h>
#include <assert.h>

// declaration of structure and corresponding data type
typedef struct _Student_ {
  char* firstname;
  char* lastname;
  int studentID;
  int studiesID;
  double final_test;
  double kreuzerl;
  double exercise;
} Student;

// allocate and initialize new student
Student* newStudent() {
  Student* student = malloc(sizeof(Student));
  assert(student != NULL);
  
  student->firstname = NULL;
  student->lastname = NULL;
  student->studentID = 0;
  student->studiesID = 0;
  student->final_test = 0.;
  student->kreuzerl = 0.;
  student->exercise = 0.;
  
  return student;
}

// free memory allocation
Student* delStudent(Student* student) {
  assert(student != NULL);
  
  // delete firstname, if memory has been allocated
  if (student->firstname != NULL) {
    free(student->firstname);
  }
    
  // delete lastname, if memory has been allocated
  if (student->lastname != NULL) {
    free(student->lastname);
  }
  
  // delete memory of struct variable and return NULL
  free(student);
  return NULL;
}

// shallow copy of student
Student* copyStudent(Student* student) {
  Student* copy = newStudent();
  assert(student != NULL);
  
  // note: for pointes, only adresses are copied
  copy->firstname = student->firstname;
  copy->lastname = student->lastname;
  
  // copy of elementary data
  copy->studentID = student->studentID;
  copy->studiesID = student->studiesID;
  copy->final_test = student->final_test;
  copy->kreuzerl = student->kreuzerl;
  copy->exercise = student->exercise;
  
  return copy;
}

// deep copy of student
Student* cloneStudent(Student* student) {
  Student* copy = newStudent();
  int length = 0;
  assert( student != NULL);
  
  // full copy of firstname
  if (student->firstname != NULL) {
    length = strlen(student->firstname);
    copy->firstname = malloc((length+1)*sizeof(char));
    assert(copy->firstname != NULL);
    strcpy(copy->firstname, student->firstname);
  }
  
  // full copy of lastname
  if (student->lastname != NULL) {
    length = strlen(student->lastname);
    copy->lastname = malloc((length+1)*sizeof(char));
    assert(copy->lastname != NULL);
    strcpy(copy->lastname, student->lastname);
  }
  
  // copy of elementary data
  copy->studentID = student->studentID;
  copy->studiesID = student->studiesID;
  copy->final_test = student->final_test;
  copy->kreuzerl = student->kreuzerl;
  copy->exercise = student->exercise;

  return copy;
}
