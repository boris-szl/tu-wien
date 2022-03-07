typedef struct _Address_ {
  char* street;
  char* number;
  char* city;
  char* zip;
} Address;

typedef struct _Employee_ {
  char* firstname;
  char* lastname;
  char* title;
  Address* home;
  Address* office;
} Employee;
