#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct
{
    int legajo;
    char nombre[50];
    float promedio;

}eAlumno;
int main()
{
    eAlumno miAlumno={1,"juan",3.25};
    eAlumno otroAlumno;

    otroAlumno.legajo=2;
    strcpy(otroAlumno.nombre,"maria");
    otroAlumno.promedio=6;

    printf("%d %s %f\n",miAlumno.legajo,miAlumno.nombre,miAlumno.promedio);
    printf("%d %s %f\n",otroAlumno.legajo,otroAlumno.nombre,otroAlumno.promedio);
    return 0;
}
