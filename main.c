#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include "list.h"
#include "Grafos.h"
#include "Direcciones.h"
#include "Map.h"


const char *get_csv_field (char * tmp, int k) {
  int open_mark = 0;
  char* ret=(char*) malloc (1000*sizeof(char));
  int ini_i=0, i=0;
  int j=0;
  while(tmp[i+1]!='\1'){

    if(tmp[i]== '\"'){
        open_mark = 1-open_mark;
        if(open_mark) ini_i = i+1;
        i++;
        continue;
    }

    if(open_mark || tmp[i]!= ','){
        if(k==j) ret[i-ini_i] = tmp[i];
        i++;
        continue;
    }

    if(tmp[i]== ','){
      if(k==j) {
        ret[i-ini_i] = 0;
        return ret;
      }
      j++; ini_i = i+1;
    }

    i++;
  }

  if(k==j) {
      ret[i-ini_i] = 0;
      return ret;
  }


  return NULL;
}


int main(){

/*creacion de TDAs*/
//lista
List* L = createList();
  int i;
  
    int * j = (int*) malloc(sizeof(int));
    *j=i;
    
  int* aux = first(L);
  while (aux){
    printf("%d ", *aux);
    aux = next(L);
  }
  printf("\n");

  aux = last(L);
  while(aux) {

    printf("%d", *aux);
    aux = prev(L);
  }

  /*menu*/
    Recorrido* camino;
    int op,tope,x1,y1,x2,y2;
    while(op!=0)
    {
        printf("---------------------------------------------------\n");
        printf("1.- Importar Coordenadas\n");
        printf("2.- Distancia entre dos entregas\n");
        printf("3.- Mostrar 3 entregas más cercanas a las coordenadas ingresadas\n");
        printf("4.- Crear ruta\n");
        printf("5.- Generar ruta aleatoria\n");
        printf("6.- Mejorar ruta\n");
        printf("7.- Mostrar rutas\n");
        printf("8.- Mejor ruta\n");
        printf("0 .- Salir\n");
        printf("---------------------------------------------------\n");
        printf("Indica la opcion: ");
        scanf("%d", &op);
        printf("\n");

        switch(op)
        {   
            case 0: 
            
            return 0;
            break;

            case 1:
            printf("IMPORTAR COORDENADAS: \n");
            printf("Ingresar primeras n lineas de coordenadas: ");
            scanf("%i",&tope);
            printf("\n");
            printf ("  x  |  y");
            printf("\n");
            FILE *fp = fopen ("coordenadas_tsp.txt", "r");
    
            char linea[1024];
            int k=0;
            fgets (linea, 1023, fp);
            while (fgets (linea, 1023, fp) != NULL) { // Se lee la linea
            for(i=0;i<1;i++){
              const char* aux = get_csv_field(linea, i); // Se obtiene el nombre
              printf("%s ",aux);
            }
              k++; if(k==tope) break;
            }
            return 0;
               
            break;

            case 2:

            
            printf("Ingresar coordenadas\n");
            printf("Coordenadas de la entrega 1:\n");
            printf("x: ");
            scanf("%i", &x1);
            printf("y: ");
            scanf("%i", &y1);

            printf("\nCoordenadas de la entrega 2:\n");
            printf("x: ");
            scanf("%i",&x2);
            printf("y: ");
            scanf("%i", &y2);
            
            distancia_entre_entregas(x1,y1,x2,y2);
            
            break;

            case 3:

            printf("Ingresar coordenadas\n");
            printf("x: ");
            scanf("%i", &x1);
            printf("y: ");
            scanf("%i", &y1);

            if(x1)
            
            break;


            case 4:
              camino = crearRuta(posiblesVec2, 0);
              printCamino(camino);
            break;

            case 5:
            
            
            break;

            case 6:
            break;

            case 7:
            break;

            case 8:
            break;
        }
    }
  return 0;
}