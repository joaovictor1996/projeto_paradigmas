#ifndef POLIGONO_H
#define POLIGONO_H
#include "ponto.h"


class Poligono
{
    int n;
    ponto V[101];
public:
    Poligono(int g);

    int nVertices(void);

    float area(void);

    void move(float a, float b);

    void rotaciona(float x0, float y0,float ang);

    void imprimeAresta();
};

#endif // POLIGONO_H
