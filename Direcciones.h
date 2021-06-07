#include "list.h"

#ifndef DIRECCIONES_H
#define DIRECCIONES_H

typedef struct Vector Vector;

Vector* newVector2(int x, int y);

float vector2Distance(Vector* vec1, Vector* vec2);

int compareVector2(Vector* vec1, Vector* vec2);

void printVector2(Vector* vec, char* mensaje);

int listContainsVector2(List* list, Vector* vec);

#endif /* DIRECCIONES_H */