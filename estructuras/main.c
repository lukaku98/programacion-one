#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    char calle[50];
    int numero;
    char localidad[50];
    int cp;                                      //** usuario:int idusuario,char nombre....int estado eserie serie

    int piso;                                    //serie:id serie,nombre,genero,canttemporadas....estado
    int dpto;
}eDomicilio;
typedef struct
{
    int legajo;
    char nombre[50];
     eDomicilio domicilio;

}eAlumno;
typedef struct
{
    int legajo;
    eDomicilio domicilio;
}eProfesor;
int main()
{
    eAlumno miAlumno;
    miAlumno.legajo=400;
    miAlumno.domicilio.cp=1870;

    printf("legajo: %d -- cp: %d ",miAlumno.legajo,miAlumno.domicilio.cp);
    return 0;
}
