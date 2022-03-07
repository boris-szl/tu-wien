#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include <math.h>

typedef struct _Vector3_ {
  double x;
  double y;
  double z;
} Vector3;

Vector3* newVector3(double x, double y, double z) {
  Vector3* v = malloc(sizeof(Vector3));
  assert(v != NULL); // ensure proper memory allocation
  v->x = x;
  v->y = y;
  v->z = z;
  return v;
}

Vector3* delVector3(Vector3* v) {
  assert(v != NULL); // ensure that vector v exists
  free(v);
  return NULL;
}

double dist(Vector3* v, Vector3* w) {
  assert(v != NULL); // ensure that vector v exists
  assert(w != NULL); // ensure that vector w exists
  return sqrt( (v->x - w->x)*(v->x - w->x)
               + (v->y - w->y)*(v->y - w->y)
               + (v->z - w->z)*(v->z - w->z) );
}

main() {
  Vector3* v = newVector3(1,1,1);
  Vector3* w = newVector3(1,2,3);
  printf("dist(x,y) = %f\n", dist(v,w));
  v = delVector3(v);
  w = delVector3(w);
}
