#include <stdio.h>
#include <cs50.h>

void fila(int longitud);

int main (void){
    int altura = get_int("Ingrese la altuta:");
    for (int i=0;i<altura;i++){
        fila(i + 1);
    }

}

void fila(int longitud){
for (int i=0;i<longitud;i++){
    printf("#");
}
printf("\n");
}
