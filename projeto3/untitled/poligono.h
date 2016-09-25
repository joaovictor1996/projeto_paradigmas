#ifndef POLIGONO_H
#define POLIGONO_H
#include "ponto.h"

class Poligono
{
    int n; //numero de vertices
    ponto V[101]; // quantidade maxima de pontos
public:
    Poligono(int g); // coordenadas do poligono

    int nVertices(void); // numero de vertices utilizados

    float area(void); // area do poligono

    void move(float a, float b); // desloca o poligono

    void rotaciona(float x0, float y0,float ang); // rotaçao do poligono(30graus)

    void imprimeAresta(); //imprime poligono
};

#endif // POLIGONO_H
