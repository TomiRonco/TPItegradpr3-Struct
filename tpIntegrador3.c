#include <stdio.h>
#include <stdlib.h>

struct DatosAlumnos
{
    int dni_alum[10];
    int dni_busq;
    int nota_alum[10];
    int fin_busq;
    int nota_nueva;
};

void main()
{
    int menu;
    struct DatosAlumnos;
    
    do
    {
        printf("SELECCIONE UNA %cPCION DEL MEN%c\n", 224, 233);
        printf("1- CARGAR ALUMNOS\n");
        printf("2- BUSCAR ALUMNO\n");
        printf("3- MODIFICAR LA NOTA DE UN ALUMNO\n");
        printf("4- MOSTRAR UN LISTADO DE 10 ALUMNOS\n");
        printf("5- SALIR\n");
        printf("SELECCION%c EL MENU: ", 224);
        scanf("%i", &menu);
        
        printf("\n");

        switch (menu)
        {
        case 1:
            for ( i = 0; i < 2; i++)
            {
                printf("Ingresa dni del alumno %i: ", i + 1);
                scanf("%i", &dni_alum[i]);
                while (dni_alum[i] < 1000000 || dni_alum[i] > 99999999)
                {
                    printf("DNI incorrecto\n");
                    printf("Ingrese nuevamente el dni: ");
                    scanf("%i", &dni_alum[i]);
                }
                            
                printf("Ingresa nota del alumno %i: ", i + 1);
                scanf("%i", &nota_alum[i]);
                while (nota_alum[i] <= 0 || nota_alum[i] > 10)
                {
                    printf("NOTA incorrecta\n");
                    printf("Ingrese nuevamente la nota: ");
                    scanf("%i", &nota_alum[i]);
                }
                printf("\n");
            }
            break;
            
        case 2:
                printf("Ingrese el dni del alumno que desea buscar: ");
                scanf("%i", &dni_busq);
                fin_busq= 0;

                for ( i = 0; i < 2; i++)
                {               
                if (dni_alum[i] == dni_busq)
                {
                    fin_busq= 1;
                    printf("DNI: %i\n", dni_alum[i]);
                    printf("NOTA: %i\n", nota_alum[i]);
                }
                }
                if (fin_busq != 1)
                {
                    printf("DNI inexistente\n");
                }
                printf("\n");
            break;
        case 3:
                printf("Ingrese el dni del alumno al que le desea cambiar la nota: ");
                scanf("%i", &dni_busq);
                fin_busq= 0;

                for ( i = 0; i < 10; i++)
                {               
                if (dni_alum[i] == dni_busq)
                {
                    fin_busq= 1;
                    printf("Ingrese la nueva nota: ");
                    scanf("%i", &nota_nueva);
                    nota_alum[i]= nota_nueva;
                }
                }
                if (fin_busq != 1)
                {
                    printf("DNI inexistente\n");
                }
                printf("\n");
            break;
        case 4:
                printf("LISTADO DE ALUMNOS\n");
                for ( i = 0; i < 10; i++)
                {    
                    printf("DNI: %i \t NOTA: %i\n", dni_alum[i], nota_alum[i]);
                }
                printf("\n");
            break;
        case 5:
                printf("\tFIN DEL PROGRAMA\n");        
            break;
        default:
            printf("\tMENU INEXISTENTE\n");
            printf("\n");
            break;
        }
    } while (menu != 5);
    
    system("pause");
}