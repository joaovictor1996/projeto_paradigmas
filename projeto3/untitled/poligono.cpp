#include "poligono.h"
#include <cmath>
#include <iostream>
const double PI  = 3.14;

using namespace std;

Poligono::Poligono(int g){
    n=g;
    int i;
    float _x,_y;
    if(n>100){
        cout<<"valor invalido"<<endl;
        exit(0);
    }
    for(i=0;i<n;i++){
        cout<<"digite o valor de x:";
        cin>>_x;
        cout<<"digite o valor de y:";
        cin>>_y;
        V[i].setXY(_x,_y);
        if(i==0){
          V[n].setXY(_x,_y);
        }
    }
}

int Poligono::nVertices(void){
    return n;
}

float Poligono::area(void){
    int i;
    float a=0,soma=0;

    for(i=0;i<n;i++)
    {
        soma=(V[n].getX()+V[i].getX())*(V[n].getY()-V[i].getY());
        a = soma + a;
    }
    if(a>0){
        return a;
    }
    if(a<0){
        return -a;
    }
}

void Poligono::move(float a, float b){
    int i;
    for(i=0;i<n;i++){
        V[i].translada(a,b);
        if(i==0){
            V[n].translada(a,b);
        }
    }
}

void Poligono::rotaciona(float x0, float y0, float ang){
    int i;
    move(x0,y0);
    //ang = (PI*ang)/180;
    for(i=0;i<n;i++){
        V[i].setXY((V[i].getX()*cos(ang) - V[i].getY()*sin(ang)) + x0, (V[i].getX()*sin(ang)+   V[i].getY()*cos(ang)) + y0);
        if(i==0){
            V[n].setXY((V[i].getX()*cos(ang) - V[i].getY()*sin(ang)) + x0, (V[i].getX()*sin(ang)+V[i].getY()*cos(ang)) + y0);
        }
    }
}

void Poligono::imprimeAresta(){
    int i;
    for(i=0;i<=n;i++){
        V[i].imprime();
        if(i !=n){
        cout<<"->";
        }
    }
    cout<<endl;
}