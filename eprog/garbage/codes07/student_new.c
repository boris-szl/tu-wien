Student* newStudent() {
  
  // allocate memory for struct variable as before.
  // Do not forget to use sizeof within malloc!
  
  Student* pointer = malloc(sizeof(Student));
  assert( pointer != NULL);

  // dereferencing of the pointer yields a struct variable
  // of type Student. The use of brackets is mandatory!
  
  (*pointer).firstname = NULL;
  (*pointer).lastname = NULL;
  (*pointer).studentID = 0;
  (*pointer).studiesID = 0;
  (*pointer).final_test = 0.;
  (*pointer).kreuzerl = 0.;
  (*pointer).exercise = 0.;

  return pointer;
}
