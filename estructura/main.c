#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 typedef struct
    {

    int dni;
    char nombre[40];
    float peso;
    eFecha fnac;
    }ePersona;

int main()
{
    ePersona unaPersona;
    unaPersona.dni=0;
    strcpy(unaPersona.nombre,"juan");
    unaPersona.peso=0;

    printf("ingrese dni: \n");
    scanf("%d",&unaPersona.dni);
    printf("ingrese nombre: \n");
    scanf("%s",&unaPersona.nombre);
    printf("ingrese peso: \n");
    scanf("%f",&unaPersona.peso);
    printf("%d %s %f", unaPersona.dni,unaPersona.nombre, unaPersona.peso);

    void mostrarPersona(ePersona personita)

    for(int i=0;i<3;i++)
    {
        scanf("%d",&unaPersona[i].dni);
    }





    return 0;
}
