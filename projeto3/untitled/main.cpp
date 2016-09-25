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
    p.rotaciona(0,0,90);
    p.imprimeAresta();

    return 0;
}
