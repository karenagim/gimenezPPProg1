#include <stdio.h>
#include <stdlib.h>

/*Dada la estructura Notebook(id, procesador, marca, precio)
generar una función que permita ordenar un array de dicha estructura por marca.
 Ante igualdad de marca deberá ordenarse por precio.
 Hardcodear datos y mostrarlos desde el main.*/

typedef struct
{
    int id;
    int procesador;
    char marca[20];
    float precio;

} Notebook;

#define TAMNOT 4
float aplicarDescuento(int precioProd, int descuento);

int contarCaracteres(char cadena[], char caracter);

int main()
{
    char letras[]= {'z', 'a', 'c','t', 'r', 'a', 'f'};
    printf("el valor es %d",contarCaracteres(letras,'a'));*/

     Notebook notebooks [TAMNOT]=
     {
         {1, 111,"PEPITO",1500.50},
         {2,222, "SORNY",1800.50},
         {3,777, "SONY",3000},
         {4,888, "DELL",7000.80},
         {5,999, "MAC",7500}
     };

     ordenarAscNotebookMarcaOPrecio(notebooks,TAMNOT);


    return 0;
}

//------EJERCICIO 1
float aplicarDescuento(int precioProd, int descuento)
{
    float conDescuento= precioProd-(float)(precioProd* descuento)/100;
    printf("El valor con descuento es %.2f ",conDescuento);
    return conDescuento;
}

//------EJERCICIO2
int contarCaracteres(char cadena[], char caracter)
{
    int contador = 0;
    int i = 0;

    while(cadena[i] != '\0')
    {
        if(cadena[i]==caracter)
        {
            contador++;
        }
        i++;
    }
    return contador;
}
//------EJERCICIO3

void ordenarAscNotebookMarcaOPrecio(Notebook notebooks[],int tamnot)
{
    Notebook aux;
    for(int i=0; i<tamnot-1; i++)
    {
        for(int j=i+1; j<tamnot; j++)
        {
            if(strcmp(notebooks[i].marca,notebooks[j].marca)<0)
            {
                aux=notebooks[i];
                notebooks[i]=notebooks[j];
                notebooks[j]=aux;

            }
            else
            {
                if(strcmp(notebooks[i].marca,notebooks[j].marca)==0&&notebooks[i].precio==notebooks[j].precio)
                {
                    aux=notebooks[i];
                    notebooks[i]=notebooks[j];
                    notebooks[j]=aux;
                }

            }
        }
    }
}


