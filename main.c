#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int main()
{
    char nombre[20];
    char apellido[20];
    char nombreCompleto[41];
    char auxCad[100];
    int i=0;

    printf("ingrese nombre: ");
    fflush(stdin);
    gets(auxCad);

    while(strlen(auxCad)>19){
        printf("Error. ingrese nombre: ");
        fflush(stdin);
        gets(auxCad);

    }
    strcpy(apellido, auxCad);

    strcpy(nombreCompleto,apellido);
    strcat(nombreCompleto,",");
    strcat(nombreCompleto,nombre);

    strlwr(nombreCompleto);

    nombreCompleto[0]= toupper(nombreCompleto[0]);

    while(nombreCompleto[i]!= '\0'){
        if(nombreCompleto[i]==' '){
            nombreCompleto[i+1]= toupper(nombreCompleto[i+1]);
        }
        i++;
    }

    printf("%s",nombreCompleto);
    return 0;
}
