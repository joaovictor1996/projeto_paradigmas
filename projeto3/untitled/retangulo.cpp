#include "retangulo.h"
#include "poligono.h"
#include <cmath>
#include <iostream>
using namespace std;

retangulo::retangulo(int x, int y, int largura, int altura)
{
    n=4;
    V[0].setXY(x,y);
    V[1].setXY(x, altura);
    V[2].setXY(largura,y);
    V[3].setXY(largura, altura);
}
