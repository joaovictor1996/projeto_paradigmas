#include "ponto.h"
#include <cmath>

#include <iostream>



using namespace std;

ponto::ponto(float _x, float _y){ // construtor
    x = _x;
    y = _y;
}

void ponto:: setX(float _x){ //definindo coordenada x
    x = _x;
}

float ponto:: getX(void){ //retornando coordenada x
    return x;
}

void ponto:: setY(float _y){ //definindo coordenada y
    y = _y;
}

float ponto:: getY(void){ //retornando coordenada y
    return y;
}

void ponto:: setXY(float _x , float _y){ // definindo ponto
    x = _x;
    y = _y;
}

ponto ponto:: add(ponto P1 ){ // soma de dois pontos
    ponto pf;
    pf.setXY(P1.getX() + x, P1.getY() + y);
    return pf;
}

ponto ponto:: sub(ponto P1){// subtração de dois pontos
    ponto pf;
    pf.setXY(P1.getX() - x, P1.getY() - y);
    return pf;
}

float ponto::norma(void){ // calculando modulo
    return(sqrt(x*x+y*y));
}

void ponto:: translada(float a, float b){ // movendo o ponto
    x = x + a;
    y= y + b;
}

void ponto:: imprime(void){ // imprimindo as coordenadas do ponto
    cout<<"("<<x<<","<<y<<")";
}


