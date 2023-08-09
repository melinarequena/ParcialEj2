//
// Created by Administrador on 8/8/2023.
//

#ifndef PARCIALEJ2_EJ2_H
#define PARCIALEJ2_EJ2_H

typedef struct cola {
    int posicionDeInsersion;
    int posicionDeExtraccion;
    int * cola;
    int capacidad;
    int tamanio;
} Cola;

Cola * newCola(int capacidad);
void encolar(Cola * cola, int elemento);
int llena(Cola * cola);
int desencolar(Cola * cola);
void imprimir(Cola * cola);
void intercambiarValores(Cola * cola, int posicionEnLaCola, int posicionesHaciaAdelante);
int siguientePosicion(Cola * cola, int posicion);

#endif //PARCIALEJ2_EJ2_H
