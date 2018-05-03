#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include "Usuario.h"
#define OCUPADO 1
#define LIBRE -1
void ModificarAux(eUsuario listado[], int limite){
    int valor;
    int i;
    int opcion;
    char nombre[25];
    int id;
    eUsuario_mostrarListado(listado,limite);
    printf("\nIngrese ID de usuario a Modificar: ");
    scanf("%d",&valor);
    for(i=0;i<limite;i++)
        {
            if(valor==listado[i].idUsuario){
                printf("Esta seguro de querer borrar al usuario: %s ", listado[valor].nombre);
                printf("\n1)SI.");
                printf("\n2)NO.");
                printf("\n○2nOpcion: ");
                scanf("%d",&opcion);
                switch(opcion){
                    case 1:
                        {
                            system("cls");
                            printf("Ingrese nuevo Nombre: ");
                            fflush("stdin");
                            gets(nombre);

                            printf("Ingrese nuevo ID: ");
                            scanf("%d",&id);

                            strcpy(listado[valor].nombre,nombre);
                            listado[valor].idUsuario=id;
                            system("cls");
                            printf("Usuario Cargado con exito!");
                            getch();

                            break;
                        }
                    case 2:
                        {


                        }
                }

            }


        }

}

void Aux_ALTA(eUsuario listado[],int limite)
{
    char nombre[50];
    int id;
    int password;
    int indice;

    id=eUsu_siguienteId(listado,limite);
        indice = eUsuario_buscarLugarLibre(listado,limite);
        if(indice == -1)
        {
            printf("No hay mas espacio para ingresar.");
            getch();
        }
        else{

            //if(!getValidString("Nombre?","Error","Overflow", nombre,50,2))
            /*printf("Ingrese su nombre: ");
            fflush("stdin");
            gets(nombre);

            printf("Ingrese una password: ");
            fflush("stdin");
            gets(password);

            system("cls");
            printf("Ingresado con exito.");
            getch();
            system("cls");

            printf("Ingrese su ID de usuario: ");
            scanf("%d",&id);*/
            }

            strcpy(listado[indice].nombre,"juan ");
            //strcpy(listado[indice].contrasena,password);
            listado[indice].idUsuario = id;
            listado[indice].estado = 1;

}

int eUsu_siguienteId(eUsuario listado[],int limite)
{
    int retorno = 0;
    int i;
    if(limite > 0 && listado != NULL)
    {
        for(i=0; i<limite; i++)
        {
            if(listado[i].estado == OCUPADO)
            {
                    if(listado[i].idUsuario>retorno)
                    {
                         retorno=listado[i].idUsuario;
                    }

            }
        }
    }

    return retorno+1;
}

int eUsuario_buscarLugarLibre(eUsuario listado[],int limite)
{
    int retorno = -1;
    int i;
        retorno = -2;
        for(i=0;i<limite;i++)
        {
            if(listado[i].estado == -1)
            {
                retorno = i;
                break;
            }
        }

    return retorno;
}

void eUsuario_mostrarUno(eUsuario listado)
{
     printf("\n %s     %d ",listado.nombre,listado.idUsuario);

}

void eUsuario_mostrarListado(eUsuario listado[],int limite)
{

    int i;
    printf(" Nombres   ID \n");
    for(i=0; i<limite; i++)
        {
            if(listado[i].estado!=-1)
            {
                eUsuario_mostrarUno(listado[i]);
            }
        }
}

void eUsuario_init(eUsuario listado[],int limite,int valor)
{
    int i;
        for(i=0; i<limite; i++)
        {
            listado[i].estado= valor;
            listado[i].idUsuario= 0;
        }

}


