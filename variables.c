#include <stdio.h> //Standar Input Output
#define vacio 0 //Macro o variable
/*
  Descripcion: Uso de variables
  Autor: Daniel R.
  Date: 6-9-2021
*/
void main(void){
    //tipoDato identificador=valorInicial;
    int piolin = 0; //Declarando Entero e inicializando variable
    const int silvestre = 0; //Declarando Constante entera e inicializaando en 0
    #define vacio 0 
 
    //printf("Etiqueta formatos", variable);
    printf("Mi variable piolín tiene el valor de %i", piolin);
    printf("\nMi variable silvestre tiene el valor de %i", silvestre);
    printf("\nMi variable vacío tiene el valor de %i", vacio);

    piolin = 100;
    //silvestre = 200;
    #define vacio 100
    
    printf("\n\nMi variable piolín tiene el valor de %i", piolin);
    printf("\nMi variable silvestre tiene el valor de %i", silvestre);
    printf("\nMi variable vacío tiene el valor de %i", vacio);
}