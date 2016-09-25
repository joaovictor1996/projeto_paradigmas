#include "ponto.h"
#include <cmath>

#include <iostream>



using namespace std;

ponto::ponto(float _x, float _y){
    x = _x;
    y = _y;
}

void ponto:: setX(float _x){
    x = _x;
}

float ponto:: getX(void){
    return x;
}

void ponto:: setY(float _y){
    y = _y;
}

float ponto:: getY(void){
    return y;
}

void ponto:: setXY(float _x , float _y){
    x = _x;
    y = _y;
}

ponto ponto:: add(ponto P1 ){
    ponto pf;
    pf.setXY(P1.getX() + x, P1.getY() + y);
    return pf;
}

ponto ponto:: sub(ponto P1){
    ponto pf;
    pf.setXY(P1.getX() - x, P1.getY() - y);
    return pf;
}

float ponto::norma(void){
    return(sqrt(x*x+y*y));
}

void ponto:: translada(float a, float b){
    x = x + a;
    y= y + b;
}

void ponto:: imprime(void){
    cout<<"("<<x<<","<<y<<")";
}


