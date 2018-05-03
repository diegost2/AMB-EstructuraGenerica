#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "Usuario.h"

#define CANTIDAD 10

int main()
{
    eUsuario Usuarios[CANTIDAD];
    eUsuario_init(Usuarios,CANTIDAD,-1);

    char respuesta='s';
    int opcion;

    while(respuesta=='s')
    {
        printf("\n1)ALTA ");
        printf("\n2)MODIFICAR");
        printf("\n3)BAJA ");
        printf("\n4)PUBLICAR PRODUCTO ");
        printf("\n5)MODIFICAR PRODUCTO ");

        printf("\n\nOpcion: ");
        scanf("%d",&opcion);

        switch(opcion)
        {
        case 1:
            {
                Aux_ALTA(Usuarios,CANTIDAD);
                break;
            }
        case 2:
            {

                break;
            }
        case 3:
            {

                getch();
                break;
            }
        case 4:
            {
                ;
                break;
            }
        case 5:
            {


               getch();
               break;
            }
        default:
            {
                printf("Opcion Incorrecta.");
            }

        }
        system("cls");
    }

    return 0;
}
