// declare array
Student** participant = malloc(N*sizeof(Student*));

// allocate memory for participants
for (j=0; j<N; ++j){
  participant[j] = newStudent();
}
