#include "Direcciones.h"
#include "list.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef struct Vector{
    int x;
    int y;
}Vector;

Vector* newVector2(int x, int y)
{
    Vector* vec = (Vector*)malloc(sizeof(Vector));
    vec->x = x;
    vec->y = y;
    return vec;
}

float vector2Distance(Vector* vec1, Vector* vec2)
{
    Vector* newVec = newVector2((vec2->x - vec1->x), (vec2->y - vec1->y));
    return sqrt( ( pow(newVec->x, 2) + pow(newVec->y, 2) ) );
}

int compareVector2(Vector* vec1, Vector* vec2)
{
    if (vec1->x == vec2->x && vec1->y == vec2->y) return 1;
    else return 0;
}

void printVector2(Vector* vec, char* mensaje)
{
    printf("%s (%i, %i)\n", mensaje, vec->x, vec->y);
}

int listContainsVector2(List* list, Vector* vec)
{
    Vector* current = first(list);
    while (current != NULL)
    {
        if (compareVector2(vec, current) == 1)
        {
            return 1;
        }
        current = next(list);
    }

    return 0;
}