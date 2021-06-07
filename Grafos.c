#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "list.h"
#include "Map.h"

typedef struct Vector{
  int x;//primer numero
  int y;//segundo numero
  char* nombre;
}Vector;

typedef struct Recorrido{
    char* nombre;
    List* direccion;
    float distancia;
}Recorrido;

typedef struct Posicion{
    Vector* vec;
    int id;
    float distance;
}Posicion;


Vector* crearVector(){

  Vector* nuevo = (Vector*)malloc(sizeof(Vector));

  nuevo->x = 0;
  nuevo->y = 0;
  nuevo->nombre = (char*)malloc(sizeof(char));

  return nuevo;
}

Recorrido* crearRecorrido()
{
    Recorrido* rec = (Recorrido*)malloc(sizeof(Recorrido));
    rec->direccion = createList();
    rec->nombre = (char*)malloc(sizeof(char) * 20);
    rec->distancia = 0;

    return rec;
}

void distancia_entre_entregas(int x1,int y1,int x2,int y2){
  
  printf("\n");
  int distancia;
  int cateto1,cateto2;

  cateto1 = x1-x2;
  if(cateto1<0)cateto1 *=-1;

  cateto2 = y1-y2;
  if(cateto2<0) cateto2*=-1;
  
  distancia = pow(cateto1,2) + pow(cateto2,2);
  distancia = sqrt(distancia);

  printf("La distancia, en numeros enteros, entre las entregas es: %i\n\n",distancia);
  
}

Recorrido* crearRuta(Map* posibles, int random)
{
    int x, y;
    Recorrido* camino;

    printf("Ingrese coordenada X: ");
    scanf("%i", &x);
    printf("Ingrese coordenada Y: ");
    scanf("%i", &y);


    return camino;
}

/*
void mostrar_entregas_cercanas(int x, int y){
  
  
}
void crear_ruta(int x, int y){
}

void Modificar_ruta(char* nombre){
}

void mostrar_ruta(){
}
*/

/*mejor_ruta*/