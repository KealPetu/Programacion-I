#include <stdio.h>

int main(){
    /*  Variables: Espacios de la memoria dedicados para almacenar un valor.
        Se refiere al nombre de una variable para tener acceso al valor almacenado.
        Dicha variable ahora se comporta como su fuese el valor que contiene.
        PERO debemos declarar el tipo de variable que se está almacenando.
    */
    int x;      //declaración
    x=123;      //inicialización
    int y=456;  //declaración + inicialización

    int edad = 18;          //integer
    float dinero = 8.50;    //número con décimales
    char calificacion = 'F';//único caracter
    char nombre[] = "Kevin";//array de caracteres

    printf("\nHola %s,\n",nombre);
    printf("Tienes %i años,",edad);
    printf(" un promedio de %c en programación ",calificacion);
    printf("y tienes alrededor de %f dólares en tu cuenta.\n", dinero);

    printf("\n|Ahora, Operaciones \"Mayor o igual que\":\n");

    int a=10, b=20;

    printf("\nIntroduce dos enteros separados por un espacio: \n");
    scanf("%i %i", &a, &b);

    if (a > b)
        printf("El mayor es %i", a);
    
    if (b > a)
            printf("El mayor es %i", b);

    if (b == a)
            printf("a y b son iguales");

    printf("\n");
    return 0;
}