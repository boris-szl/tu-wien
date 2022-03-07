// declaration of structure
struct _Student_ {
  char* firstname;   // first name
  char* lastname;    // last name
  int studentID;     // student ID
  int studiesID;     // studies ID
  double final_test; // points in final test
  double kreuzerl; // percentage of Kreuzerl
  double exercise;   // points in exercises
};

// declaration of corresponding data type
typedef struct _Student_ Student;

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
