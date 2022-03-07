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

main() {
  // declaration of variable var of type Student
  Student var;
  // assign values to members of struct variable
  var.firstname = "Dirk";
  var.lastname = "Praetorius";
  var.studentID = 0;
  var.studiesID = 680;
  var.final_test = 25.;
  var.kreuzerl = 0.7;
  var.exercise = 35.;
}
