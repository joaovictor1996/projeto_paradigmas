#include <iostream>
#include <cmath>
#include "ponto.h"
#include "poligono.h"

using namespace std;

int main(void)
{
    Poligono p(4);
    cout<<p.nVertices();
    p.imprimeAresta();
    p.move(2,3);
    p.imprimeAresta();
    p.rotaciona(0,0,180);
    p.imprimeAresta();

    return 0;
}
