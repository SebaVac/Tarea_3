#include <stdio.h>
#include <stdlib.h>
#include "list.h"

typedef struct recorrido{
  int coordenada1;
  int coordenada2;
  int distancia;
}recorrido;

typedef struct Nodo{
  int x;
  int y;
  recorrido info;
}Nodo;


Nodo* createNode(){

  Nodo* n = (Nodo*)malloc(sizeof(Nodo));

  n->x = 0;
  n->y = 0;


  return n;
}


void distancia_entre_entregas(int entrega1, int entrega2){
  

}


void mostrar_entregas_cercanas(int x, int y){
  
  

}


void crear_ruta(int x, int y){



}


List* crear_ruta_aleatoria(int x, int y){

  //Nodo n = createNode();

  List* lista = (List*)malloc(sizeof(List*));



  return lista;
}


void Modificar_ruta(char* nombre){



}


void mostrar_ruta(){



}


/*mejor_ruta*/
